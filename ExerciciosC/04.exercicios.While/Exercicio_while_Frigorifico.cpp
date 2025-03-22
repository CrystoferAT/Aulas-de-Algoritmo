#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");

	int id, id_G, id_M; 
	float peso, boi_G=0, boi_M=9999;
	
	printf("Digite o ID do boi :");
	scanf("%i", &id);
	
	while(id!=0)
	{
		printf("\nInforme o peso do boi:");
		scanf("%f", &peso);
		
		if(peso > boi_G)
		{
			boi_G=peso;
			id_G=id;
		}
		if(peso < boi_M)
		{
			boi_M=peso;
			id_M=id;
		}
		printf("\nInforme o ID do boi:");
		scanf("%i", &id);
	}
	printf("\nO boi mais gordo é: %.2f", boi_G);
	printf("\nO boi mais magro é: %.2f", boi_M);
	printf("\nA id do boi mais gordo é:%i", id_G);
	printf("\nA id do boi mais magro é:%i", id_G);

}
