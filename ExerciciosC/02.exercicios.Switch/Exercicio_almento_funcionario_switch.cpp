#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
/* Os funcionários de uma empresa receberam um aumento de salário:
? técnicos (código = 1), 50%;
? gerentes (código = 2), 30%;
? demais funcionários (código = 3), 20%.
Escrever um algoritmo para ler o código do cargo de um funcionário e o valor do seu salário atual, calcular e
imprimir o novo salário após o aumento.*/
int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	int cod;
	float slr,amt, tot;
	
	printf("Digite o código do funcionário:");
	printf("\nTécnicos [1].");
	printf("\nGerentes [2].");
	printf("\nDemais funcionários [3]\n");
	scanf("%i", &cod);
	printf("\nDigite o salário :R$");
	scanf("%f", &slr);
	
	switch(cod)
	{
		case 1:
			amt=slr*0.5;
			tot=slr+amt;
			printf("\n Novo salário é:R$%.2f.", tot);
			break;
		case 2:
			amt=slr*0.3;
			tot=slr+amt;
			printf("\n Novo salário é:R$%.2f.", tot);	
			break;
		case 3:
			amt=slr*0.2;
			tot=slr+amt;
			printf("\n Novo salário é:R$%.2f.", tot);
			break;
			
	}
}
