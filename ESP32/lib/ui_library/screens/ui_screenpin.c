// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: hsb_indicator

#include "../ui.h"

void ui_screenpin_screen_init(void)
{
ui_screenpin = lv_obj_create(NULL);
lv_obj_clear_flag( ui_screenpin, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_labeltitleoptions1 = lv_label_create(ui_screenpin);
lv_obj_set_width( ui_labeltitleoptions1, LV_SIZE_CONTENT);  /// 30
lv_obj_set_height( ui_labeltitleoptions1, LV_SIZE_CONTENT);   /// 4
lv_obj_set_x( ui_labeltitleoptions1, lv_pct(0) );
lv_obj_set_y( ui_labeltitleoptions1, lv_pct(-43) );
lv_obj_set_align( ui_labeltitleoptions1, LV_ALIGN_CENTER );
lv_label_set_long_mode(ui_labeltitleoptions1,LV_LABEL_LONG_CLIP);
lv_label_set_text(ui_labeltitleoptions1,"PIN Sicherung");
lv_label_set_recolor(ui_labeltitleoptions1,"true");
lv_obj_set_style_text_color(ui_labeltitleoptions1, lv_color_hex(0x888888), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_labeltitleoptions1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_labeltitleoptions1, &lv_font_montserrat_36, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_containercolorbarpin = lv_obj_create(ui_screenpin);
lv_obj_remove_style_all(ui_containercolorbarpin);
lv_obj_set_width( ui_containercolorbarpin, lv_pct(100));
lv_obj_set_height( ui_containercolorbarpin, lv_pct(15));
lv_obj_set_x( ui_containercolorbarpin, lv_pct(0) );
lv_obj_set_y( ui_containercolorbarpin, lv_pct(-43) );
lv_obj_set_align( ui_containercolorbarpin, LV_ALIGN_CENTER );
lv_obj_set_flex_flow(ui_containercolorbarpin,LV_FLEX_FLOW_ROW);
lv_obj_set_flex_align(ui_containercolorbarpin, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
lv_obj_clear_flag( ui_containercolorbarpin, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_containercolorbarpin, lv_color_hex(0x727272), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_containercolorbarpin, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_blend_mode(ui_containercolorbarpin, LV_BLEND_MODE_SUBTRACTIVE, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_textareapin = lv_textarea_create(ui_screenpin);
lv_obj_set_width( ui_textareapin, lv_pct(45));
lv_obj_set_height( ui_textareapin, LV_SIZE_CONTENT);   /// 10
lv_obj_set_x( ui_textareapin, lv_pct(0) );
lv_obj_set_y( ui_textareapin, lv_pct(-20) );
lv_obj_set_align( ui_textareapin, LV_ALIGN_CENTER );
lv_obj_set_flex_flow(ui_textareapin,LV_FLEX_FLOW_ROW);
lv_obj_set_flex_align(ui_textareapin, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
lv_textarea_set_max_length(ui_textareapin,4);
lv_textarea_set_placeholder_text(ui_textareapin,"PIN");
lv_textarea_set_one_line(ui_textareapin,true);
lv_textarea_set_password_mode(ui_textareapin, true);
lv_obj_set_style_text_align(ui_textareapin, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_textareapin, &lv_font_montserrat_48, LV_PART_MAIN| LV_STATE_DEFAULT);


lv_obj_set_style_text_align(ui_textareapin, LV_TEXT_ALIGN_CENTER, LV_PART_TEXTAREA_PLACEHOLDER| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_textareapin, &lv_font_montserrat_48, LV_PART_TEXTAREA_PLACEHOLDER| LV_STATE_DEFAULT);

ui_keyboard1 = lv_keyboard_create(ui_screenpin);
lv_keyboard_set_mode(ui_keyboard1,LV_KEYBOARD_MODE_NUMBER);
lv_obj_set_width( ui_keyboard1, lv_pct(100));
lv_obj_set_height( ui_keyboard1, lv_pct(50));
lv_obj_set_x( ui_keyboard1, lv_pct(0) );
lv_obj_set_y( ui_keyboard1, lv_pct(25) );
lv_obj_set_align( ui_keyboard1, LV_ALIGN_CENTER );
lv_obj_set_flex_flow(ui_keyboard1,LV_FLEX_FLOW_ROW);
lv_obj_set_flex_align(ui_keyboard1, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);

ui_buttonexitfrompin = lv_btn_create(ui_screenpin);
lv_obj_set_width( ui_buttonexitfrompin, lv_pct(14));
lv_obj_set_height( ui_buttonexitfrompin, lv_pct(14));
lv_obj_set_x( ui_buttonexitfrompin, lv_pct(-42) );
lv_obj_set_y( ui_buttonexitfrompin, lv_pct(-43) );
lv_obj_set_align( ui_buttonexitfrompin, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_buttonexitfrompin, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_buttonexitfrompin, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_buttonexitfrompin, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_buttonexitfrompin, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_src( ui_buttonexitfrompin, &ui_img_arrow_left_white_png, LV_PART_MAIN | LV_STATE_DEFAULT );

lv_keyboard_set_textarea(ui_keyboard1,ui_textareapin);
lv_obj_add_event_cb(ui_buttonexitfrompin, ui_event_buttonexitfrompin, LV_EVENT_ALL, NULL);

}