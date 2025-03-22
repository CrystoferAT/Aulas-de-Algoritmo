#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	int idade=0;
	
	
	while(idade!=37)
	{
		printf("\nDigite seu palpite de idade do Kleber.");
		scanf("%i",&idade);
		
		if(idade > 37)
			{
			,	printf("\nMuito alto.");
			}
			else if(idade==37)
			{
				printf("\nAcertou Mizeravel. ");	
			}
		
			
			else if(idade < 37)
			{
				printf("\nMuito baixo.");
			}
	}
}
