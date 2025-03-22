#include<stdio.h>
#include<math.h>

int main()
{
	float sl, au, slf,vau;
	printf("Digite o salario do funcinario:");
	scanf("%f", &sl);
	
	printf("Digite a porcentagem de almento:");
	scanf("%f", &au);
	
	vau=sl*(au/100);
	slf=sl+vau;
	
	printf("\n Valor do aumento foi R$%.2f",vau);
	printf("\n O salario final é:R$%.2f",slf);

}
