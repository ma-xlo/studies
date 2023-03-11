#include <stdio.h>

#define FAIXA_COMISSAO 3000
#define PORCENTAGEM 0.05

void main(void)
{
	float vendaMensal;
	printf("Total de vendas: ");
	scanf("%f", &vendaMensal);

	if( vendaMensal < FAIXA_COMISSAO)
		printf("Sem comissão!\n");
    else      
        printf("Comissão de R$%.2f!\n", vendaMensal*PORCENTAGEM);

}