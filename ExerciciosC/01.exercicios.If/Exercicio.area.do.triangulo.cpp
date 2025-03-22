#include<stdio.h>
#include<math.h>

int main()

{
	float base, altura , area;
	printf("Informe o valor da base:");
	scanf("%f", &base);
	printf("Informe o valor da altura:");
	scanf("%f", &altura);
	area=(base*altura)/2;
	
	printf("\nArea igual a :%.2f", area);
}
