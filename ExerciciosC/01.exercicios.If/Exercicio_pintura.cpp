#include<stdio.h>
#include<math.h>
int main()
{
	float al, la, area, tinta;
	printf("Digite a altura da parede a ser pintada:");
	scanf("%f",&al);
	printf("Digite a largura da parede:");
	scanf("%f",&la);
	area=al*la;
	tinta=area/2;
	
	printf("\n A area e:%.2f",area);
	printf("\n Sera usado %.0f litros de tinta",tinta);
}
