//Faça um programa em para informar o valor do ingresso que deve ser cobrado
//de um fã que deseja assistir ao Show do Guns N' Roses. Considere que:
//1 - Valor do ingresso na Pista Premium = 970,00
//2 - Valor do ingresso na Pista = 480,00
//3 - Valor do ingresso na Cadeira Inferior = 650,00
//4 - Valor do ingresso na Cadeira Superior = 380,00
//OBS. Para todas as modalidades você deve verificar se o fã paga ingresso
//INTEIRO ou MEIO ingresso.
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
	
	int op, set;
	float valor, desconto, total;
	char tipo;
	
	printf("###################################################");
	printf("\n#####INGRESSOS PARA O SHOW DO GUNS N´ROSES#########");
	printf("\n###################################################");
	printf("\n[1] - Valor do ingresso na Pista Premium = 970,00");
	printf("\n[2] - Valor do ingresso na Pista = 480,00");
	printf("\n[3] - Valor do ingresso na Cadeira Inferior = 650,00");
	printf("\n[4] - Valor do ingresso na Cadeira Superior = 380,00");
	printf("\nTipo de ingresso [M]meio [I]inteiro:");
	
	printf("\nDigite qual o setor do seu ingresso:[..]");
	scanf("%d", &set);
	printf("\nDigite o tipo do seu ingresso [M]meio [I]inteiro:");
	scanf(" %c", &tipo);
	switch(op)
	{
		case 1:
			valor=970;
			if(tipo =='M' || tipo =='m')
			{
				desconto=valor*0.5;
				total=valor-desconto;
			}
			else
			{
				total=valor;
			}
			break;
		case 2:
			valor=480;
			if(tipo =='M' || tipo =='m')
			{
				desconto=valor*0.5;
				total=valor-desconto;
			}
				else
			{
				total=valor;
			}
			break;
		case 3:
			valor=650;
			if(tipo =='M' || tipo =='m')
			{
				desconto=valor*0.5;
				total=valor-desconto;
			}
				else
			{
				total=valor;
			}
			break;
		case 4:
			valor=380;
			if(tipo =='M' || tipo =='m')
			{
				desconto=valor*0.5;
				total=valor-desconto;
			}
				else
			{
				total=valor;
			}
			break;
	}
	system("cls");
	printf("###################################################");
	printf("\n#####INGRESSOS PARA O SHOW DO GUNS N´ROSES#########");
	printf("\n###################################################");
	printf("\n O total a pagar no seu ingresso é :R$%.2f", total);
}

