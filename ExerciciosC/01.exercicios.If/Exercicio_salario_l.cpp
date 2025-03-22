#include<locale.h>
#include<locale.h>
int main()

{
	float salario_b, salario_l, desconto;
	printf("Digite seu salario:");
	scanf("%f", &salario_b);
	
	if(salario_b>1500)
	{
		desconto=(salario_b*0.09);
		salario_l=(salario_b-desconto);
	printf("\n Salario liquido é:%.2f", salario_l);
	}
	else
	{
		desconto=(salario_b*0.08);
		salario_l=(salario_b-desconto);
	printf("\n Salario liquido é:%.2f", salario_l);
	}
}
