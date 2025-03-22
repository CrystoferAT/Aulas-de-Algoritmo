#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system ("color 0b");
	
	int i, quant=3, idade ,faixa1=0, faixa2=0, faixa3=0, faixa4=0, faixa5=0 ;
	
	for(i=0; i<quant ;i++)
	{
		printf("\nDigite a idade da %dª pessoa:", i+1);
		scanf("%d", &idade);
		
		if(idade<=15)
		{
			faixa1++;
		}
		else if(idade>=16 && idade<=30)
		{
			faixa2++;
		}
		else if(idade>=31 && idade<=45)
		{
			faixa3++;
		}
		else if(idade>=46 && idade<=60)
		{
			faixa4++;
		}
		else 
		{
			faixa5++;
		}
	}
	printf("\nQuantidade de pessoas em cada faixa etária:\n");
    printf("Até 15 anos: %d\n", faixa1);
    printf("De 16 a 30 anos: %d\n", faixa2);
    printf("De 31 a 45 anos: %d\n", faixa3);
    printf("De 46 a 60 anos: %d\n", faixa4);
    printf("Acima de 61 anos: %d\n", faixa5);

	int prcfx1= (faixa1 * 100) / quant;
    int prcfx2 = (faixa5 * 100) / quant;

    printf("\nPercentagem de pessoas na primeira faixa etária (Até 15 anos): %d%%\n", prcfx1);
    printf("Percentagem de pessoas na última faixa etária (Acima de 61 anos): %d%%\n", prcfx2);
}

