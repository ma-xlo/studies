#include <stdio.h>

#define FATURAMENTO_LIMITE 100000
#define ALIQ_PRIMARIA 0.10
#define ALIQ_SECUNDARIA 0.15

void main(void)
{
	float n;
	printf("Valor do Faturamento: ");
	scanf("%f", &n);
	if(n <= FATURAMENTO_LIMITE)
		printf("ICMS: R$%.2f\n", ALIQ_PRIMARIA * n);
	else
		printf("ICMS: R$%.2f\n", ALIQ_SECUNDARIA * n);
}