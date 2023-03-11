#include <stdio.h>

#define LUCRO_MIN 1000
#define LUCRO_MAX 3000
#define PORCENT 0.40

void main(void)
{
	float fatMensal, totalDespesas, lucro;
	printf("Faturamento mensal: ");
	scanf("%f", &fatMensal);
    printf("Despesas: ");
	scanf("%f", &totalDespesas);
    lucro = fatMensal - totalDespesas;

	if( lucro < LUCRO_MAX)
		lucro -= 1000;
    else      
        lucro *= PORCENT;
    
    printf("Faturamento: R$%.2f\n", lucro);

}