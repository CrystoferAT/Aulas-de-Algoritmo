//Faça um programa que simule a urna eletrônica. A tela a ser apresentada deverá ser da seguinte forma:
//As opções são:
//1. Candidato Robert Trujillo
//2. Candidato Roberto Carlos
//3. Candidato Maicon Jackson
//4. Nulo
//5. Branco
//Entre com o seu voto: O programa deverá ler os votos dos eleitores e a votação estará encerrada quando a opção for o
//número 6, após finalizar a votação o número de votos de cada candidato.
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
	
	int voto1=0, voto2=0, voto3=0, voto4=0, voto5=0, votos=0;
	int op;
	float soma=0;
	
	do{
		printf("[1] Candidato Robert Trujillo");
		printf("\n[2]Candidato Roberto Carlos");
		printf("\n[3]Candidato Maicon Jackson");
		printf("\n[4]Nulo");
		printf("\n[5]Branco");
		printf("\n[6] Encerrar votação");
		
		printf("\nDigite uma opção:",votos);
		scanf("%i",&op);
		votos++;
		switch(op)
		{
			case 1:
				voto1++;
			break;
			case 2:
				voto2++;
			break;
			case 3:
				voto3++;
			break;	
			case 4:
				voto4++;
			break;	
			case 5:
				voto5++;
			break;	
		}
		system("cls");
		
	}while( op !=6 );
		
		printf("\nCandidato Robert Trujillo %i",voto1);
		printf("\nCandidato Roberto Carlos %i",voto2);
		printf("\nCandidato Maicon Jackson %i",voto3);
		printf("\nNulo %i",voto4);
		printf("\nBranco %i",voto5);
		printf("\nNumero total de votos :%i",votos);
}
