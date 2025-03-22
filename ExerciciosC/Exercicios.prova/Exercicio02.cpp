//Faca um programa que calcule o troco que o atendente de uma farmacia deve
//devolver para um cliente. Considere que:
//„h Se a pessoa possuir cartao fidelidade tem 10% de desconto sobre o valor total;
//„h Se a pessoa for aposentada tem 15% de desconto sobre o valor total;
//ƒ{ Seu programa deve solicitar a informacao do valor total;
//ƒ{ Se a pessoa tem algum tipo de desconto;
//ƒ{ O valor da(s) cedula(s) com a qual esta pagando;
//ƒ{ Valor do desconto;
//ƒ{ Apresentar na tela o troco a ser devolvido para o cliente (quando existir).
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
	
	int op;
	float valor, valorf, desc;
	
	printf("##########################################");
	printf("\n################ Farmacia ################");
	printf("\n##########################################");
	printf("\nDigite o valor a ser cobrado do cliente:R$");
	scanf("%f", &valor);
	printf("\nDigite o tipo de desconto [1]sem desconto [2]cartão fidelidade [3]aposentado:");
	scanf("%d", &op);
	
	switch(op)
	{
		case 1:
			valorf=valor;
			break;
		case 2:
			desc=valor*0.1;
			valorf=valor-desc;
			break;
		case 3:
			desc=valor*0.15;
			valorf=valor-desc;
			break;
	}
	printf("\nO valor do desconto é:R$%.2f", desc);
	printf("\nO Valor Total a pagar é de :R$%.2f ",valorf);
	
	
	
}
