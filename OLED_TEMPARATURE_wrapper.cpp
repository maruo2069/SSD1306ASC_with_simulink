
/*
 * Include Files
 *
 */
#if defined(MATLAB_MEX_FILE)
#include "tmwtypes.h"
#include "simstruc_types.h"
#else
#include "rtwtypes.h"
#endif



/* %%%-SFUNWIZ_wrapper_includes_Changes_BEGIN --- EDIT HERE TO _END */
#include <math.h>

#ifndef MATLAB_MEX_FILE

#include <SSD1306Ascii/src/SSD1306Ascii.h>
#include <SSD1306Ascii/src/SSD1306Ascii.cpp>
#include <SSD1306Ascii/src/SSD1306AsciiAvrI2c.h>

SSD1306AsciiAvrI2c oled;

#endif
/* %%%-SFUNWIZ_wrapper_includes_Changes_END --- EDIT HERE TO _BEGIN */
#define u_width 1

/*
 * Create external references here.  
 *
 */
/* %%%-SFUNWIZ_wrapper_externs_Changes_BEGIN --- EDIT HERE TO _END */
 
/* %%%-SFUNWIZ_wrapper_externs_Changes_END --- EDIT HERE TO _BEGIN */

/*
 * Start function
 *
 */
extern "C" void OLED_TEMPARATURE_Start_wrapper(real_T *xD)
{
/* %%%-SFUNWIZ_wrapper_Start_Changes_BEGIN --- EDIT HERE TO _END */
#ifndef MATLAB_MEX_FILE

oled.begin(&Adafruit128x32, 0x3C);
oled.setFont(TimesNewRoman16);
oled.displayRemap(1);
oled.clear();
}

#endif
/* %%%-SFUNWIZ_wrapper_Start_Changes_END --- EDIT HERE TO _BEGIN */
/*
 * Output function
 *
 */
extern "C" void OLED_TEMPARATURE_Outputs_wrapper(const uint8_T *temp,
			const uint8_T *humd,
			const real_T *xD)
{
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_BEGIN --- EDIT HERE TO _END */
#ifndef MATLAB_MEX_FILE
    
//1行目    
    
oled.setCursor(0, 0);
oled.print("Temp:");

//入力される文字数のpixel数を抽出し、それ以降の数字領域をクリアする
String temp_str = String(*temp);
char temp_chr[temp_str.length()+1];
temp_str.toCharArray(temp_chr,temp_str.length()+1);
uint8_t temp_wth = oled.strWidth(temp_chr);

oled.setCursor(60, 0);
oled.print(*temp);
oled.clear(60+temp_wth-1,100,0,1);

oled.setCursor(101, 0);
oled.println("C,");

oled.print("Humdt:");
String humd_str = String(*humd);
char humd_chr[humd_str.length()+1];
humd_str.toCharArray(humd_chr,humd_str.length()+1);
uint8_t humd_wth = oled.strWidth(humd_chr);

oled.setCursor(60, 2);
oled.print(*humd);
oled.clear(60+humd_wth-1,100,2,4);

oled.setCursor(101,2);
oled.println("%");

#endif
/* %%%-SFUNWIZ_wrapper_Outputs_Changes_END --- EDIT HERE TO _BEGIN */
}

/*
 * Updates function
 *
 */
extern "C" void OLED_TEMPARATURE_Update_wrapper(const uint8_T *temp,
			const uint8_T *humd,
			real_T *xD)
{
/* %%%-SFUNWIZ_wrapper_Update_Changes_BEGIN --- EDIT HERE TO _END */
 
/* %%%-SFUNWIZ_wrapper_Update_Changes_END --- EDIT HERE TO _BEGIN */
}

