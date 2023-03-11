#include <stdio.h>
void main()
{
float x, y;

	printf(“Digite o primeiro numero: ”);
	scanf("%f", &x);
	printf(“Digite o segundo numero: ”);
	scanf("%f", &y);
	
	if(x > y)
		printf(“Maior que o segundo.\n”);
	else
		printf(“Menor que o segundo.\n”);
}
