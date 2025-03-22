#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	float media, n1, n2 ;
	printf("Informe a nota do aluno:");
	scanf("%f", &n1);
	printf("informe a segunda nota do aluno:");
	scanf("%f", &n2);
	media=(n1+n2)/2;
	
		if ( media>=6)
	{
		
		printf("\n Aluno aprovado");
		printf("A média do aluno é:%.2f", media);
		
	}
	else
	{
		printf("\n Aluno reprovado");
	}

		
	
}
