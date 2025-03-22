#include<stdio.h>
#include<math.h>
int main()
{
	float km,dia, valor;
	printf("Digite a quilometagem rodada com veiculo:");
	scanf("%f", &km);
	printf("Digite a quantidade de dias alugado:");
	scanf("%f",&dia);
	valor=(dia*90)+km*0.2;
	
	printf("\n Total a pagar é R$%.2f", valor);
}
