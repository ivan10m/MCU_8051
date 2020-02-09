/*
		Program ispisuje tekst na LCDu (16x2), zatim pomice tekst
		lijevo pa desno. 
		Mikroupravljac: 89C51
		Clock: 11.0592MHz
*/

#include<reg51.h>
#include<lcd.h> 

//LCD Module Connections
sbit RS = P0^0;
sbit EN = P0^1;
sbit D4 = P2^4;
sbit D5 = P2^5;
sbit D6 = P2^6;
sbit D7 = P2^7;
//End LCD Module Connections

void delay(unsigned int time)
{
  unsigned int i, j;
  for(i=0;i<time;i++)
  {
    for(j=0;j<113;j++);
  }
}

void main()
{
  int i;
  Lcd4_Init();   //inicijalizacija LCDa
	while(1)
  {
    Lcd4_Set_Cursor(1,1);
    Lcd4_Write_String("LCD Hello World");
    for(i=0;i<15;i++)
    {
      delay(1000);
      Lcd4_Shift_Left();
    }
    for(i=0;i<15;i++)
    {
      delay(1000);
      Lcd4_Shift_Right();
    }
    Lcd4_Clear();
    Lcd4_Set_Cursor(2,1);
    Lcd4_Write_Char('m');
    Lcd4_Write_Char('u');
    delay(2000);
  }
}