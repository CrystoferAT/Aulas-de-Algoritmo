#include<stdio.h>
#include<math.h>

int main()
{
	float nota1, peso1, nota2, peso2, nota3, peso3, media;
	printf("Informe a nota1:");
	scanf("%f" , &nota1);
	printf("Informe o peso1:");
	scanf("%f", &peso1);
	printf("\nInforme a nota2:");
	scanf("%f", &nota2);
	printf("Informe o peso2:");
	scanf("%f", &peso2);
	printf("\nInforme a nota3:");
	scanf("%f", &nota3);
	printf("Informe o peso3:");
	scanf("%f", &peso3);
	media=nota1*peso1+nota2*peso2+nota3*peso3/(peso1+peso2+peso3);
	printf("\nMedia e:%.2f" ,media);

}
