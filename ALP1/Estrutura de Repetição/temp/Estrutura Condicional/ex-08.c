#include <stdio.h>

#define LIMITE_MIN 9.99
#define LIMITE_MAX 100
#define PERCENT_DESC 0.10

void main(void)
{
	float n;
	printf("Valor Total: ");
	scanf("%f", &n);
	if( n >= LIMITE_MIN && n <=LIMITE_MAX)
		printf("Ganhou um cupom!\n");
	else if(n > LIMITE_MAX)
		printf("Ganhou 2 cupoms e um vale-desconto de R$%.2f!\n", PERCENT_DESC*n);
    else
		printf("Não ganha desconto.\n",n);

}