/*
 * LCD_init.h
 *
 *  Created on: 18 sie 2021
 *      Author: fet
 */

#ifndef LCD_HD44780_LCD_INIT_H_
#define LCD_HD44780_LCD_INIT_H_

#define LCD_Y 2		// number of rows
#define LCD_X 16	// number of columns

// select 0 or 1 (1 - use RW pin to control LCD)
#define USE_RW 1
// select port and pins to control LCD
#define LCD_D7_PORT B
#define LCD_D7 6

#define LCD_D6_PORT B
#define LCD_D6 5

#define LCD_D5_PORT B
#define LCD_D5 4

#define LCD_D4_PORT B
#define LCD_D4 3

#define LCD_RS_PORT A
#define LCD_RS 6

#define LCD_E_PORT A
#define LCD_E 5

#define LCD_RW_PORT A
#define LCD_RW 7

// --------- functions
void init_lcd(void (*delay_us)(uint32_t us) );
void lcd_str(char *str);
void lcd_cls(void);

#endif /* LCD_HD44780_LCD_INIT_H_ */
