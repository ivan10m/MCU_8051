/*
	Program broji na 7 segmentnom pokazivacu brojeve od 0 do 9.
	Pokazivac je spojen na port P3 i koristen je pokazivac u spoju zajedicke katode
	Korišteni mikroupravljac: AT89C51
	Frekvencija generatora takta: 11.0592 MHz
*/

#include<reg51.h>

void ms_delay( unsigned int time);

void main()
{
	char DB[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x67};  //common cathode(zajednicka katoda)
	unsigned char i;
	while(1)
	{
	for(i=0;i<10;i++)
	{
		P3=DB[i];
		ms_delay(1000);
	}
	}
}
void ms_delay( unsigned int time)
{
	unsigned int i,j;
	//time x 1ms (1000 x 1ms = 1000ms)
	for(i=0;i<time;i++)
	{
		for(j=0;j<113;j++);  //1 ms
	}
}