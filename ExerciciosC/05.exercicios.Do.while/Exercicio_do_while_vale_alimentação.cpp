//Considere que um funcionário recebe todo inicio de mês um crédito de R$500,00 de
//vale alimentação em seu cartão. Faça um programa utilizando a estrutura de repetição
//alimentação deste funcionário.
//repita (do ...while) que após o recebimento do credito controle o saldo do cartão
//EXERCÍCIO
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
	
	float saldo=0, credito=500, gasto=0;
	int resp;
	
	do{
		printf("[1] para mais crédito \n [2] para realizar compra\n");
		scanf("%i", &resp);
		if(resp == 1)
			{
			saldo += credito;
			printf("Crédito recebido :R$%.2f", credito);
			}
	
		if else(resp == 2)
		{	
			printf("\nSaldo atual:R$%.2f", saldo);
			printf("\nDigite o gasto ou [0] para sair.");
			printf("\nGasto :R$");
			scanf("%f",&gasto);
		}
			if(gasto>saldo)
			{
				printf("\nSaldo insuficiente.");
			}
			if else 
			{
				saldo-=gasto;
				printf("\nSaldo restante:R$%.2f",saldo);
		}
		
	}while(gasto !=0);

}
