#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system ("color 0b");
	
	int i, idade, quant=3, masc=0, fem=0;
	char sexo;
	float soma, media;
	
	for(i = 0; i<quant ;i++)
	{
		printf("Informe o seu sexo: [M] para maculino [F] para feminino.", i+1);
		scanf(" %s",&sexo);
	
		printf("\nDigite sua idade:" ,i+1);
		scanf("%d", &idade);
		
			if(sexo == 'M' || sexo == 'm' && idade>0)
			{
				masc++;
			}
		    	else if(sexo == 'F' || sexo == 'f' && idade >0)
				{
					fem++;
				}
			else
			{
				printf("\nDados inválidos.");
				break;
			}
			soma=soma+idade;
	}
			media=soma/quant;
			
			printf("\nTotal de homens: %d",masc);
			printf("\nTotal de mulheres: %d", fem);
			printf("\nMédia de idade: %.2f", media);
}

