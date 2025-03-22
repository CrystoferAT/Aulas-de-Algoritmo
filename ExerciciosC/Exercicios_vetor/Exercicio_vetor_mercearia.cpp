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
	
	int i, quant[2];
	float preco[2], tot=0;
	
	for(i=0; i<2; i++)
	{
		printf("\nQuantidade do %iº produto" ,i+1);
		scanf("%i", &quant[i]);
		
		printf("\nDigite o preço do %iº produto" ,i+1);
		scanf("%f", &preco[i]);
		
		tot=preco[i]*quant[i];
		
	}
	printf("\n O %.2f", tot);
	
}
