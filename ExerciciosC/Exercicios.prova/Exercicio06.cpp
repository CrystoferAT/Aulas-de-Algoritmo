//Sera realizada uma pesquisa com os 1500 alunos de uma instituicao de ensino onde
//serao registrados os seguintes dados de cada aluno:
//a. Idade
//b. Sexo (F/M)
//c. Area escolhida (Informatica, Marketing, Logistica, Web Design)
//Elabore um algoritmo que, sobre os dados registrados, apresente:
//„h Porcentagem de mulheres na area de informatica
//„h Total de alunos de marketing ou logistica, entre 18 e 25 anos
//„h Media de idade dos alunos
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
	
	int i, tot_a=4, cod, idd=0, idd_t=0, mti=0, hti=0, ti=0, logm=0;
	char sexo;
	
	for(i=0; i<tot_a; i++)
	{
		printf("Digite o seu sexo [F] para feminino [M] para masculino:", i+1);
		scanf(" %c", &sexo);
		
		printf("\nDigite a idade:");
		scanf("%d", &idd);
		idd_t+=idd;
		
		printf("\n[1]Informatica.");
		printf("\n[2]Marketing.");
		printf("\n[3]Logistica.");
		printf("\n[4]Web Design.\n");
		
		printf("\nDigite seu curso:");
		scanf("%d", &cod);
		ti++;
		
		switch(cod)
		{
			case 1 :
			case 4 :
				if(sexo=='f'|| sexo=='F')
				{
					mti++;
				}
				else
				{
					hti++;
				}
				break;
			case 2 :
			case 3 :
				if(idd >=18 && idd <=25)
				{
					logm++;
				}
				break;
				ti=mti+hti;
			default:
				printf("\nCurso invalido.");
		}
	}
	float md_idd;
	md_idd=idd_t/tot_a;
	
	float prc_m = 0;
    if (mti > 0) {
        prc_m = ((float)mti / ti) * 100;}
	
	printf("\nTotal de alunos de Marketing ou Logística entre 18 e 25 anos: %d", logm);
    printf("\nMédia de idade dos alunos: %.2f anos\n", md_idd);
    printf("Porcentagem de mulheres nas áreas de Informática e Web Design: %.2f%%\n", prc_m);
    
}

