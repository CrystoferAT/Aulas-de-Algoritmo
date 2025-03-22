#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	int i,aln=5 ,mnrq=0, maird=0;
	float idade, altura, soma_idd=0, soma_alt=0, idd_media=0, alt_media=0;
	
	for(i=0; i<5; i++)
	{
		printf("\nDigite a idade do %dº aluno:", i+1);
		scanf("%f", &idade);
		printf("\nDigite a altura do %dº aluno:",i+1);
		scanf("%f", &altura);
		
		if(altura<1.7)
		{
			soma_idd+=idade;
			mnrq++;
		}
		if(idade>20)
		{
			soma_alt+=altura;
			maird++;
		}
	}
	idd_media=soma_idd/mnrq;
	alt_media=soma_alt/maird;
	printf("\nA idade média dos alunos com menos de 1,70m é:%.2f",idd_media);
	printf("\nA altura média dos alunos com mais de 20 anos  é:%.2f",alt_media);
}
