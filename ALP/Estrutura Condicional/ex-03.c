#include <stdio.h>
void main()
{
	float x;
	printf(“Digite um numero: ”);
	scanf("%f", &x);
	if(x > 0)
		printf(“Numero positivo.\n”);
	else
		printf(“Numero nao negativo!\n”);
}
