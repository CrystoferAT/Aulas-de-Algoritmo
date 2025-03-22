#include<stdio.h>
#include<math.h>

int main()
{
	float consumo,t, vm;
	printf("Informe o tempo de viagem em horas:");
	scanf("%f", &t);
	printf("Informe a velocidade media:");
	scanf("%f", &vm);
	consumo=(vm*t/12);
	
	printf("\nO consumo em litros foi %.2f", consumo);
}
