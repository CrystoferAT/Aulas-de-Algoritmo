#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	system("color 0b");
	
	int i;
	
	for(i=0; i<3; i++)
	{
		printf("\n%d° é %i",i+1);
	}
	
}
