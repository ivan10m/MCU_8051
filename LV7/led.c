/*
	Program pali/gasi LEDice svake sekunde
	na portu P1 (P1.0 do P1.7)
	Korišteni mikroupravljac: AT89C51
	Frekvencija generatora takta: 11.0592 MHz
*/

#include<reg51.h>

void ms_delay(unsigned int time);

void main()
{
	while(1)													// beskonacna petlja
	{
		P1 = 0xFF;											// svi izlazi aktivni/upaljeni
		ms_delay(1000);									// vrijeme cekanja u ms
		P1 = 0x00;											// svi ulazi ugašeni
		ms_delay(1000);
	}
}

void ms_delay(unsigned int time)		// funkcija za vrijeme cekanja
{
	unsigned int i, j;
	for(i=0; i<time; i++)
		{
			for(j=0; j<113; j++);					// generira vrijeme cekanje od 1ms, 1000 x 1ms = 1000ms
		}
}