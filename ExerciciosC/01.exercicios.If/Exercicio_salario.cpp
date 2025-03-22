#include<stdio.h>
#include<math.h>
int main()

{
	float sl, al, cn, cm, pp, lz;
	printf("Digite seu salario :R$");
	scanf("%f", &sl);
	al=sl*0.2;
	cn=sl*0.35;
	cm=sl*0.20;
	pp=sl*0.1;
	lz=sl-al-cn-cm-pp;
	
	printf("\n O valor para alimentacao e:%.2f",al);
	printf("\n O valor para contas e:%.2f",cn);
	printf("\n O valor para combustivel e:%.2f",cm);
	printf("\n O valor para poupanca e :%.2f",pp);
	printf("\n O valor que sobrou para lazer e:%.2f",lz);
}
