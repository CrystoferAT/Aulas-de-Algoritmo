#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

char Conceito(float nota1, float nota2, float nota3)
{
	float media;
	char conceito;
	media=(nota1+nota2+nota3)/3;
		
		if(media<=4.9)
		{
			conceito='D';
		}
		
		if(media<=6.9 && media>=5)
		{
			conceito='C';
		}
		
		if(media<=8.9 && media>=7)
		{
			conceito='B';
		}
		
		if(media<=10 && media>=9)
		{
			conceito='A';
		}
	return conceito;
}

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	

	float nota1, nota2, nota3, media;
	char conc;
	printf("Informe as três notas do aluno:");
	printf("\nNota 1:");
	scanf("%f",&nota1);
	printf("\nNota 2:");
	scanf("%f",&nota2);
	printf("\nNota 3:");
	scanf("%f",&nota3);
	
	media=(nota1+nota2+nota3)/3;
	conc=Conceito(nota1,nota2,nota3);
	
	printf("\nMedia %.2f", media);
	printf("\nConceito %c", conc);
	
}
