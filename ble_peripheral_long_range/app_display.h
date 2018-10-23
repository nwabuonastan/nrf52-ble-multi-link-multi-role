#ifndef __APP_DISPLAY_H
#define __APP_DISPLAY_H

#define TXT_ID_0_X_LOCATION 15
#define TXT_ID_0_Y_LOCATION 10
#define TXT_ID_0_WIDTH 200
#define TXT_ID_0_HEIGHT 25

#define INTERWIDGET_SPACE 10

#define BTN_ID_0_X_LOCATION TXT_ID_0_X_LOCATION
#define BTN_ID_0_Y_LOCATION TXT_ID_0_Y_LOCATION+TXT_ID_0_HEIGHT+INTERWIDGET_SPACE
#define BTN_ID_0_WIDTH TXT_ID_0_WIDTH
#define BTN_ID_0_HEIGHT 30

#define TXT_ID_1_X_LOCATION TXT_ID_0_X_LOCATION
#define TXT_ID_1_Y_LOCATION BTN_ID_0_Y_LOCATION+BTN_ID_0_HEIGHT+INTERWIDGET_SPACE
#define TXT_ID_1_WIDTH TXT_ID_0_WIDTH
#define TXT_ID_1_HEIGHT TXT_ID_0_HEIGHT

#define BTN_ID_1_X_LOCATION TXT_ID_0_X_LOCATION
#define BTN_ID_1_Y_LOCATION TXT_ID_1_Y_LOCATION+TXT_ID_1_HEIGHT+INTERWIDGET_SPACE
#define BTN_ID_1_WIDTH TXT_ID_0_WIDTH
#define BTN_ID_1_HEIGHT BTN_ID_0_HEIGHT

#define TXT_ID_2_X_LOCATION TXT_ID_0_X_LOCATION
#define TXT_ID_2_Y_LOCATION BTN_ID_1_Y_LOCATION+BTN_ID_1_HEIGHT+INTERWIDGET_SPACE
#define TXT_ID_2_WIDTH TXT_ID_0_WIDTH
#define TXT_ID_2_HEIGHT TXT_ID_0_HEIGHT

#define BTN_ID_2_X_LOCATION TXT_ID_0_X_LOCATION
#define BTN_ID_2_Y_LOCATION TXT_ID_2_Y_LOCATION+TXT_ID_2_HEIGHT+INTERWIDGET_SPACE
#define BTN_ID_2_WIDTH TXT_ID_0_WIDTH
#define BTN_ID_2_HEIGHT BTN_ID_0_HEIGHT

#define TXT_ID_3_X_LOCATION TXT_ID_0_X_LOCATION 
#define TXT_ID_3_Y_LOCATION BTN_ID_2_Y_LOCATION+BTN_ID_2_HEIGHT+INTERWIDGET_SPACE - 5
#define TXT_ID_3_WIDTH 50
#define TXT_ID_3_HEIGHT 30 

#define TXT_ID_4_X_LOCATION TXT_ID_3_X_LOCATION
#define TXT_ID_4_Y_LOCATION TXT_ID_3_Y_LOCATION+TXT_ID_3_HEIGHT+2
#define TXT_ID_4_WIDTH TXT_ID_3_WIDTH
#define TXT_ID_4_HEIGHT TXT_ID_3_HEIGHT

#define TXT_ID_5_X_LOCATION TXT_ID_3_X_LOCATION + TXT_ID_3_WIDTH + 2
#define TXT_ID_5_Y_LOCATION TXT_ID_3_Y_LOCATION  
#define TXT_ID_5_WIDTH 100
#define TXT_ID_5_HEIGHT TXT_ID_3_HEIGHT

#define TXT_ID_6_X_LOCATION TXT_ID_4_X_LOCATION + TXT_ID_4_WIDTH + 2
#define TXT_ID_6_Y_LOCATION TXT_ID_4_Y_LOCATION  
#define TXT_ID_6_WIDTH TXT_ID_5_WIDTH
#define TXT_ID_6_HEIGHT TXT_ID_4_HEIGHT

#define TXT_ID_7_X_LOCATION TXT_ID_5_X_LOCATION + TXT_ID_5_WIDTH + 2
#define TXT_ID_7_Y_LOCATION TXT_ID_5_Y_LOCATION  
#define TXT_ID_7_WIDTH 27
#define TXT_ID_7_HEIGHT TXT_ID_5_HEIGHT

#define TXT_ID_8_X_LOCATION TXT_ID_6_X_LOCATION + TXT_ID_6_WIDTH + 2
#define TXT_ID_8_Y_LOCATION TXT_ID_6_Y_LOCATION  
#define TXT_ID_8_WIDTH TXT_ID_7_WIDTH
#define TXT_ID_8_HEIGHT TXT_ID_7_HEIGHT

#define TXT_ID_9_X_LOCATION TXT_ID_7_X_LOCATION + TXT_ID_7_WIDTH + 2
#define TXT_ID_9_Y_LOCATION TXT_ID_7_Y_LOCATION  
#define TXT_ID_9_WIDTH 16
#define TXT_ID_9_HEIGHT ((TXT_ID_7_HEIGHT * 2) + 2)

void app_display_init(void);

void app_display_draw_main_screen(void);

void app_display_update(void);

#endif