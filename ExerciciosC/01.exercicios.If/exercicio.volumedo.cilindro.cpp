#include<stdio.h>
#include<math.h>

int main()
{
	float volume , raio , altura;
	printf("informe o valor da altura:");
	scanf("%f", &altura);
	printf("informe o valor do raio:");
	scanf("%f", &raio);
	volume=(3.14*(raio*raio))*altura;
	
	printf("\nO volume do cilindro e:%.2f", volume);
}

