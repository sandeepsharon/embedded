#include <pic.h>
#define RS RC5
#define RW RC6
#define E RC7
#define _XTAL_FREQ 16000000
__CONFIG(0x3F7A);

void data(char);
void command(int);
void main()
{	
	TRISC = 0x00;
	TRISD = 0x00;
	TRISB = 0x07;
	PORTB = 0x00;
	char str1[8] = "Motor 1";
	char str2[8] = "forward";
	char str3[9] = "backward";
	
	while(1)
	{
		if(RB0 == 1)
		{
			RB3 = 1;
			RB4 = 0;
			while(RB0==1)
		{


		command(0x38); 
        command(0x01);
		command(0x80);
		command(0x06);
		command(0x0E);
		int i = 0;
		while(str1[i] != '\0')
		{
			data(str1[i]);
			i++;
		}
		command(0xC0);
		int j = 0;
		while(str2[j] != '\0')
		{
			data(str2[j]);
			j++;
		}

		}
			
		}
		else if(RB1 == 1)
		{
			RB3 = 0;
			RB4 = 1;
			
			
			
			
		while(RB1==1)
		{


		command(0x38); 
        command(0x01);
		command(0x80);
		command(0x06);
		command(0x0E);
		int i = 0;
		while(str1[i] != '\0')
		{
			data(str1[i]);
			i++;
		}
		command(0xC0);
		int j = 0;
		while(str3[j] != '\0')
		{
			data(str3[j]);
			j++;
		}

		}
			
			
			
			
			
			
			
			
		}
		else if(RB2 == 1)
		{
			RB3 = 0;
			RB4 = 0;
		while(RB2==1)
		{


		command(0x38); 
        command(0x01);
		command(0x80);
		command(0x06);
		command(0x0E);
	}
		}
	}
}

void command(int a)
	{
		RS = 0;
		RW = 0;
		E = 0;
        PORTD = a;
		E = 1;
		__delay_ms(40);
		E = 0;
	}

	void data(char a)
	{
		RS = 1;
		RW = 0;
		E = 0;
		PORTD = a;
        E = 1;
		__delay_ms(40);
		E = 0;
	}
