
#include "gtest/gtest.h"
#include "time.h"
// external libaries
#include "esp_netif_sntp.h"
#include "esp_sntp.h"
// source libaries
#include "sntp_service.h"
// test libaries
#include "build_defs.h"
#include "test_wifi.h"

TEST_F(WifiTest, Sntp) {
  sntp_sync_status_t sntp_status;
  Sntp_service sntp;

  esp_err_t err_connection;

  err_connection = m_wifi_handler.connect_to_wifi();

  EXPECT_EQ(err_connection, ESP_OK)
      << "Wifi connection could not be established";

  std::tm build_time_tm{};
  build_time_tm.tm_year = BUILD_YEAR - 1900;
  build_time_tm.tm_mon = BUILD_MONTH - 1;
  build_time_tm.tm_mday = BUILD_DAY;
  build_time_tm.tm_hour = BUILD_HOUR;
  build_time_tm.tm_min = BUILD_MIN;
  build_time_tm.tm_sec = BUILD_SEC;
  build_time_tm.tm_isdst = 0;

  std::time_t build_time_t = std::mktime(&build_time_tm) - _timezone;

  // ESP_LOGI("WifiTest.Sntp", "build time sec: %jd", (intmax_t)build_time_t);
  // ESP_LOGI("WifiTest.Sntp", "%d, month: %d, day: %d, hour:%d, min:%d,
  // sec:%d",
  //          BUILD_YEAR, BUILD_MONTH, BUILD_DAY, BUILD_HOUR, BUILD_MIN,
  //          BUILD_SEC);

  time_t now;
  struct tm timeinfo;
  char strftime_buf[64];

  sntp.init();

  EXPECT_EQ(sntp_get_sync_mode(), SNTP_SYNC_MODE_IMMED);

  // wait on sntp status for 20 seconds
  esp_err_t sync_err = esp_netif_sntp_sync_wait(pdMS_TO_TICKS(30000));
  ASSERT_EQ(sync_err, ESP_OK);
  /*// other way to poll on sntp status
  int max_tries = 100;
  int current_try = 0;
  while (sntp_get_sync_status() != SNTP_SYNC_STATUS_COMPLETED) {
    std::cout << "SNTP not synced yet. Wait and check again" << std::endl;

    // exit test when SNTP does not get completed in 10 seconds
    ASSERT_GT(max_tries, current_try);

    vTaskDelay(100 / portTICK_PERIOD_MS);  // 0.1 s delay
    current_try = current_try + 1;
  };*/

  sntp_status = sntp_get_sync_status();

  char build_time_buf[64];
  strftime(build_time_buf, sizeof(build_time_buf), "%c", &build_time_tm);

  time(&now);
  gmtime_r(&now, &timeinfo);

  double diffSecs = difftime(now, build_time_t);
  diffSecs = abs(diffSecs);

  ESP_LOGI("WifiTest.Sntp", "build time: %s", build_time_buf);
  strftime(strftime_buf, sizeof(strftime_buf), "%c", &timeinfo);
  ESP_LOGI("WifiTest.Sntp", "NOW: %s", strftime_buf);

  ESP_LOGI("WifiTest.Sntp", "build time: %s, NOW: %s", ctime(&build_time_t),
           ctime(&now));

  ESP_LOGI("WifiTest.Sntp", "build time sec: %jd, now seconds: %jd",
           (intmax_t)build_time_t, (intmax_t)now);

  // check if compile time and system time are about the same
  // set epsilon to a day to be able to ignore timezones
  EXPECT_LT(diffSecs, 86400.0);
}