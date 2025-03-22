//Na pastelaria Senhor dos Pasteis todos os dias da semana e aplicada uma oferta
//com o intuito de atrair a clientela.
//1 - Segunda-feira: O pastel custa R$5,50.
//2- Terca-feira: O pastel custa R$5,00 e o Refrigerante R$2,50.
//3- Quarta-feira: O pastel R$4,80 e o suco R$2,80.
//4- Quinta-feira: O pastel R$5,10 e o refrigerante R$2,00.
//5- Sexta-feira: O pastel R$5,50 e o suco R$2,50
//6 ¡V Sabado ¡V Preco de tabela
//7 - Domingo ¡V Preco de tabela
//O preco de tabela normal e:
//- Pastel = 6,50
//- Refrigerante = 3,00
//- Suco = 4,00
//ƒ{ Seu programa deve solicitar qual o dia da semana;
//ƒ{ Seu programa deve solicitar quantos pasteis o cliente deseja;
//ƒ{ Seu programa deve solicitar qual e quantas bebidas o cliente deseja;
//ƒ{ Com base nessas informacoes informar o total a pagar.
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
	
	int dia, qp, qr, qs;
	float past=6.5, refr=3, suc=4, quant, tot; 
	
	printf("\n#################################");
	printf("\n------------Pastelaria-----------");
	printf("\n#################################\n");
	printf("\nO preco de tabela normal e:");
	printf("\nPastel = 6,50");
	printf(" Refrigerante = 3,00");
	printf(" Suco = 4,00");
	printf("\n#################################");
	printf("\n------------Preços especiais.-----------");
	printf("\n#################################\n");
	printf("\n[1] - Segunda-feira: O pastel custa R$5,50.");
	printf("\n[2]- Terca-feira: O pastel custa R$5,00 e o Refrigerante R$2,50.");
	printf("\n[3]- Quarta-feira: O pastel R$4,80 e o suco R$2,80.");
	printf("\n[4]- Quinta-feira: O pastel R$5,10 e o refrigerante R$2,00.");
	printf("\n[5]- Sexta-feira: O pastel R$5,50 e o suco R$2,50");
	printf("\n[6] ¡V Sabado  Preco de tabela");
	printf("\n[7] - Domingo  Preco de tabela");
	printf("\nDigite o dia da semana :");
	scanf("%d", &dia);
	
	if(dia>=1 && dia <=7){
	switch(dia)
	{
		case 1:
			past=5.5;
			printf("\nDigite quantos pasteis:");
			scanf("%d", &qp);
			printf("\nDigite quantos refrigerantes:");
			scanf("%d", &qr);
			printf("\nDigite quantos sucos:");
			scanf("%d", &qs);
			tot=(qp*past)+(qr*refr)+(qs*suc);
		break;
		case 2:
			past=5;
			refr=2.5;
			printf("\nDigite quantos pasteis:");
			scanf("%d", &qp);
			printf("\nDigite quantos refrigerantes:");
			scanf("%d", &qr);
			printf("\nDigite quantos sucos:");
			scanf("%d", &qs);
			tot=(qp*past)+(qr*refr)+(qs*suc);
		break;
		case 3:
			past=4.8;
			suc=2.8;
			printf("\nDigite quantos pasteis:");
			scanf("%d", &qp);
			printf("\nDigite quantos refrigerantes:");
			scanf("%d", &qr);
			printf("\nDigite quantos sucos:");
			scanf("%d", &qs);
			tot=(qp*past)+(qr*refr)+(qs*suc);
		break;
		case 4:
			past=5.1;
			refr=2;
			printf("\nDigite quantos pasteis:");
			scanf("%d", &qp);
			printf("\nDigite quantos refrigerantes:");
			scanf("%d", &qr);
			printf("\nDigite quantos sucos:");
			scanf("%d", &qs);
			tot=(qp*past)+(qr*refr)+(qs*suc);
		break;
		case 5:
			past=5.5;
			suc=2.5;
			printf("\nDigite quantos pasteis:");
			scanf("%d", &qp);
			printf("\nDigite quantos refrigerantes:");
			scanf("%d", &qr);
			printf("\nDigite quantos sucos:");
			scanf("%d", &qs);
			tot=(qp*past)+(qr*refr)+(qs*suc);
		break;
		case 6:
			printf("\nDigite quantos pasteis:");
			scanf("%d", &qp);
			printf("\nDigite quantos refrigerantes:");
			scanf("%d", &qr);
			printf("\nDigite quantos sucos:");
			scanf("%d", &qs);
			tot=(qp*past)+(qr*refr)+(qs*suc);
		break;
		case 7:
			printf("\nDigite quantos pasteis:");
			scanf("%d", &qp);
			printf("\nDigite quantos refrigerantes:");
			scanf("%d", &qr);
			printf("\nDigite quantos sucos:");
			scanf("%d", &qs);
			tot=(qp*past)+(qr*refr)+(qs*suc);
		break;
	}
	printf("Total a pagar:R$%.2f", tot);
	}
	else {
		printf("\nDados inválidos.");
	}
}
