#include<reg52.h>

void delay(void);

void main()
{
	int a=0x0f;
	while(1)
	{
		P0=a;
		a=~a;
		delay();
	}
}

void delay()
{
	int i,j;
	for(i=0;i<=255;i++)
	{	
		for(j=0;j<=255;j++);
  }
}
