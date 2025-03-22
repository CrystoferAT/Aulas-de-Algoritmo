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
	 
	 float tot, n1, n2;
	 char op;
	 
	 printf("######### CALCULADORA ##########\n");
	 printf("Digite um numero inteiro: ");
	 scanf("%f", &n1);
	 printf("\nDigite outro numero inteiro: ");
	 scanf("%f", &n2);
	 printf("\n ##### ESCOLHA A OPERAÇÃO DESEJADA ##########\n");
	 printf("\n+ para adição");
	 printf("\n- para subtração");
	 printf("\n* para multiplicação");
	 printf("\n/para divisão\n");
	 scanf(" %c", &op);
	 
printf("\n\n ############################################\n\n");
switch(op)
{
		case '+':
			tot=n1+n2;
			printf("\nResultado da Operação é %.2f", tot);
			break;
			
		case '-':
			tot=n1-n2;
			printf("\nResultado da Operação é %.2f", tot);
			break;
			
		case '*':
			tot=n1*n2;
			printf("\nResultado da Operação é %.2f", tot);
			break;
			
		case '/':
			if(n2==0)
			{
			printf("O valor não é divisivel por zero .");
			}
			else
			{
			tot=(n1/n2);
			printf("Total :%.2f", tot);
			break;
			}
			default: 
			printf("\n	Operação Inválida!");
			break;
			
			}
}
	

