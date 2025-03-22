#include<stdio.h>
#include<math.h>

int main()
{
	float c , f;
	printf("Conversor de Temperatura");
	printf("\ninforme a temperatura em graus celcius:");
	scanf("%f", &c);
	f= (9*c +160) / 5;
	
	printf("\nAtemperatura esta %.2f graus Fahrenheit" ,f );
}
