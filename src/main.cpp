/*
 * @Author: ziyefbk 2827567189@qq.com
 * @Date: 2024-05-18 08:16:05
 * @LastEditors: ziyefbk 2827567189@qq.com
 * @LastEditTime: 2024-05-18 12:17:59
 * @FilePath: \xlab_2c:\Users\28275\Documents\PlatformIO\Projects\xlab_3\src\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Arduino.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(3, 5, 9 ,10, 11, 12);

void setup() {
  pinMode(2,OUTPUT);
  analogWrite(2,10);
  lcd.begin(16, 2);//设置LCD要显示的列数、行数，即2行16列
  lcd.setCursor(0, 0);//设置光标定位到第0列，第1行（从0开始）
  lcd.print("hello, world!");//输出Hello World
}

void loop() {
  lcd.setCursor(0,1);//设置光标位置
  lcd.print("time:");
  lcd.print(millis()/1000);//计算运行时间
}
