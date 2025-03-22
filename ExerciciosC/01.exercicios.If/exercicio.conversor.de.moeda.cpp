#include<stdio.h>
#include<math.h>

int main()
{
	float vr, txc, dl;
	printf("Conversor de moeda");
	printf("\nInforme o que deseja converter:");
	scanf("%f", &vr);
	printf("\nInforme a taxa de cambio:");
	scanf("%f", &txc);
	dl=vr*txc;
	
	printf("\nO valor em dolar e:%.2f",dl);
}
