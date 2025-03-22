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

	float notas[10], media_t, soma_t=0;
	int i;
	
	for(i=0 ; i<10; i++)
	{
		printf("Digite a nota do aluno:", i+1);
		scanf("%f", &notas[i]);
		soma_t=soma_t+notas[i];
	}
	
	for(i=0; i<10; i++)
	{
		printf("\nA nota do aluno %d° é :%.2f",i+1 ,notas[i]);
	}
	media_t=soma_t/10;
	
	printf("\nA média da turma é :%.2f", media_t);

}
