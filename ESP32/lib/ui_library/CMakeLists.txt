SET(SOURCES screens/ui_screenhome.c
    screens/ui_screenoptions.c
    screens/ui_screenpin.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    images/ui_img_settings_png.c
    images/ui_img_indoor_png.c
    images/ui_img_humidity_png.c
    images/ui_img_outdoor_png.c
    images/ui_img_connected_png.c
    images/ui_img_arrow_left_white_png.c
    images/ui_img_rooms_png.c
    images/ui_img_outdoor_white_png.c
    images/ui_img_wifi_icon_small_png.c
    images/ui_img_language_png.c
    images/ui_img_options_png.c
    images/ui_img_list_icon_png.c
    images/ui_img_key_icon_small_png.c
    images/ui_img_signal0_png.c
    images/ui_img_signal1_png.c
    images/ui_img_signal2_png.c
    images/ui_img_signal3_png.c
    images/ui_img_signal4_png.c
    images/ui_img_signal5_png.c)

add_library(ui ${SOURCES})
