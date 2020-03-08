/*
	Program će svakim pritiskom tipkala invertirati stanje svjetleće diode – 
	ako je dioda isključena, a korisnik stisne tipkalo, dioda će se uključiti i obrnuto.
	Mikroupravljac: 89C51
	Clock: 11.0592 MHz
*/

#include<reg51.h>

sbit led = P1^0;
sbit tipkalo = P2^0;
int stanje = 0;		//pocetno stanje LEDice 

void main()
{
	P1 = 0x00;	//Port P1 postavljen kao output(izlaz)
	P2 = 0xFF;	//Port P2 postavljen kao input(ulaz)
	led = 0;
	
	while(1)
	{
		if(tipkalo==0)
		{
			if(stanje==0) 
				{
					stanje=1;
				}
			else
				{
					stanje=0;
				}
			led = stanje;
			
		}
		
	}
}