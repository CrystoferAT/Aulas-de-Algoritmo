#include<stdio.h>
#include<math.h>

int main()

{
	float v1, v2, valor;
	printf("Infome o valor total devido:");
	scanf("%f", &v1);
	printf("Informe a porcentagem da multa por atrazo:");
	scanf("%f", &v2);
	valor=(v1/100)*v2+v1;
	
	printf("\nO valor total devido com multa e: %.2f", valor);
}
