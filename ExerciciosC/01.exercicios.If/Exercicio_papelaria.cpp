#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main()

{
	system("color 0b");
	setlocale(LC_ALL,"PORTUGUESE");
	int quant;
	float preco_1=0.25 ,preco_2=0.20, total;
	
	printf("Digite a quantidade:");
	scanf("%i",&quant);
	 if(quant<=100)
	 {
	 	total=quant*preco_1;
	 	printf("%.2f",total);
	 }
	 else
	 {
	 	total=100*preco_1-((100-quant)*preco_2);
	 	printf("%.2f",total);
	 }
	
	
}
