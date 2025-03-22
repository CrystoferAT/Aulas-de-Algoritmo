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
	
	char str[10];
	
	printf("Digite seu nome: ");
	gets(str);
	printf("%d", strlen(str));
	
	
}
