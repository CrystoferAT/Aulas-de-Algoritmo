#include<stdio.h>
#include<math.h>
int main()

{
	float salario, dias_trab;
	printf("Digite os dias trabalhados no mes:");
	scanf("%f",&dias_trab);
	salario=dias_trab *(8*25);
	
	printf("\n O salario e R$ %.2f",salario);
}
