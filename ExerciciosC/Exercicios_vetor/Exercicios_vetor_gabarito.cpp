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

	int i, acerto=0, erro=0; 
	char gab[]={'a', 'b', 'c', 'd', 'a', 'b', 'c', 'd', 'a', 'b'};
	char resp[4];
	
	for (i=0; i<4; i++)
	{
		printf("Digite a resposta da %iª pergunta:", i+1);
		scanf(" %c", &resp[i]);
		
		if(resp[i]==gab[i])
		{
			acerto++;
		}
		else
		{
			erro++;
		}
	}
	printf("\nAcertos :%i", acerto);
}
