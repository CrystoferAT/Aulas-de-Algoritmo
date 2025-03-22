#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	char resp;
	float valor, soma=0;
	int cont=1;
	
	printf("Digite dois valores reais[0] para encerrar a operação:");

	do{
		printf("\nO %dº Valor:", cont);
		scanf("%f", &valor);
		
		soma+=valor;
		cont++;
	}while(valor != 0);
	printf("\n%.2f",soma);
}
