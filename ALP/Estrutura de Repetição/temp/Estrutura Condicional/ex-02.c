#include <stdio.h>
void main()
{
	int x;
	printf("Digite um numero: ");
	scanf("%d", &x);
	if(x % 2 != 0)
		printf("Numero nao par.\n");
	else
		printf("Numero par.\n");
}
