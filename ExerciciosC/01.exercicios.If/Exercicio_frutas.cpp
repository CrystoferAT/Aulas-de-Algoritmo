#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main()
{
	//para utilizar pontuação e caracteres especiasis.
	setlocale(LC_ALL,"PORTUGUESE");
	//Para mudar o estilo.
	system("color 0b");
	float valor, kg_t, total, tot_f, kg_mor,kg_mac, mor=6.50, mor_2=6.20, mac=3.80, mac_2=3.50;
	//solicita a quantidade de morangos.
	printf("Digite a quantos kg de morangos:");
	scanf("%f", &kg_mor);
	//solicita a quantidade de maçãs.
	printf("Digite a quantos kg de maçãs:");
	scanf("%f",&kg_mac);
	
	if((kg_mor||kg_mac)>10)
	{
		total=(kg_mor*mor_2)+(kg_mac*mac_2);
		kg_t=kg_mor+kg_mac;
		printf("Valor Bruto R$%.2f",total);
		
	}
	else
	{
		total=(kg_mor*mor)+(kg_mac*mac);
		kg_t=kg_mor+kg_mac;
		printf("Valor bruto R$%.2f",total);
	}
	//	Se o valo ou peso passar aplica desconto
	 if (total > 50.00||kg_t>10) 
	    {
         total *= 0.90; // Aplica o desconto de 10%
    	}

    printf("\nO valor total com desconto a ser pago é: R$ %.2f\n", total);
	
	
}
