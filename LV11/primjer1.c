/*
	Program pali LEDicu kad je pritisnuto tipkalo
	Mikroupravljac: 89C51
	Clock: 11.0592 MHz
*/

#include<reg51.h>

sbit led = P1^0;
sbit tipkalo = P2^0;

void main()
{
	P1 = 0x00;	//Port P1 postavljen kao output(izlaz)
	P2 = 0xFF;	//Port P2 postavljen kao input(ulaz)
	
	while(1)
	{
		if(tipkalo==0)				//ako je tipkalo stisnuto
		{
			led = 1;						//upali LEDicu
			while(tipkalo==0);	//drži upaljenu LEDicu 
		}
		led = 0;
	}
}