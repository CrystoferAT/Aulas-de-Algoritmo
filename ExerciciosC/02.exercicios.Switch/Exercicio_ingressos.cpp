/*Faça um programa em para informar o valor do ingresso que deve ser cobrado
de um fã que deseja assistir ao Show do Guns N' Roses. Considere que:
1 - Valor do ingresso na Pista Premium = 970,00
2 - Valor do ingresso na Pista = 480,00
3 - Valor do ingresso na Cadeira Inferior = 650,00
4 - Valor do ingresso na Cadeira Superior = 380,00
OBS. Para todas as modalidades você deve verificar se o fã paga ingresso
INTEIRO ou MEIO ingresso.
Exemplo de execução
Favor informar o tipo do ingresso: 1
O Ingresso é inteiro ou meio-ingresso? (I -Inteiro ou M – Meio-Ingresso): M
O Valor a pagar é: R$485*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<conio.h>
#include<string.h>
int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	int tipo;
	float valor, desconto, valor_p;
	
	printf("\n1 - Valor do ingresso na Pista Premium = 970,00");
	printf("\n2 - Valor do ingresso na Pista = 480,00");
	printf("\n3 - Valor do ingresso na Cadeira Inferior = 650,00");
	printf("\n4 - Valor do ingresso na Cadeira Superior = 380,00");
	
	printf("\nInforme o tipo de ingresso:");
	scanf("%i", &tipo);
	printf("\n[M]meio-ingresso ou[I]inteiro?");
}
