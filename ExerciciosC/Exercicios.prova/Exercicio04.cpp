//4) Em uma escola um grupo de amigos composto por 10 pessoas decidem reunir o dinheiro
//que possuem para fazer um lanche coletivo.
//Faça um programa que solicite a cada um dos 10 amigos qual o valor que cada um possui
//para o lanche e ao final da execução apresente o valor total arrecado para a compra do
//lanche
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int main()
{

	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	int i;
	float valor=0, valort=0;
	
	printf("#####################################");
	printf("\n###########Lanche Coletivo###########");
	printf("\n#####################################");
	
	for(i=0; i<10; i++)
	{
		printf("\nDigite o valor da sua contribuição:R$",i+1);
		scanf("%f", &valor);
		if (valor>0)
		{
			valort+=valor;
		}
		else if (valor<=0)
		{
			printf("Valor inválido.");
	
		}

	}
	printf("\nValor total arrecadado para o lanche é :R$%.2f", valort);
	
	
}
