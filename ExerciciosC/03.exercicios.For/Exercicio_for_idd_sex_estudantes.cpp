#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
		
	int i ;
	char nome[50], sexo;
	float meninasm=0,meninosm=0, meninas=0, meninos=0 ,somaf=0, somam=0;
	float quant=3, idade, mediaf, mediam;
	
	for(i=0; i<quant; i++)
	{
		printf("Digite seu nome:");
		scanf("%s", &nome);
		printf("\nDigite seu Sexo [F]para Feminino e [M]para Masculino:", i+1);
		scanf("%s",&sexo);
		printf("\nDigite sua idade:", i+1);
		scanf("%f", &idade);
		
		if(sexo=='f'||sexo=='F')
		{
			if(idade>21)
			{
				meninasm++;
			}
			somaf=somaf+idade;
			meninas++;	
		}
		else if(sexo=='m' || sexo=='M')
		{
			if(idade>18)
			{
				meninosm++;
			}
			somam=somam+idade;
			meninos++;
		}
		else 
		{
			printf("\nDados inválidos!");
			break;
		}
	}
	mediaf=somaf/meninas;
	mediam=somam/meninos;
	printf("\nQuantidade de mulheres maiores de 21 anos: %.2f\n", meninasm);
    printf("\nQuantidade de homens maiores de 18 anos: %.2f\n", meninosm);
    printf("\nMédia de idade das mulheres: %.2f\n", mediaf);
    printf("\nMédia de idade dos homens: %.2f\n", mediam);
}
