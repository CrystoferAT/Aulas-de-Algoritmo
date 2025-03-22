#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	char genero;
	float alt, peso;

	printf("Calcule seu peso ideal");
	printf("\n Informe seu gênero?(F)para feminino e (M)para masculino.");
	scanf("%c", &genero);
	printf("\n Iforme sua altura:");
	scanf("%f",&alt);
	
	if(genero=='F'|| genero=='f')
	{
		peso=(62.1*alt)-44.7;
		printf("\n Seu peso ideal é:%.2f", peso);
	}
	if(genero=='M'|| genero=='m')
	{
	
		peso=(72.7*alt)-58;
		printf("\n Seu peso ideal é:%.2f", peso);
	}
}
		
