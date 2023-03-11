#include <stdio.h>

int main() {
    
    int quantVendas, totalMerc;
    float valorDeCusto, valorDeVenda, totalFat, lucroTotal;
    
    for( ; ; ) {

        printf("Valor de custo: ");
        scanf("%f", &valorDeCusto);
        
        if(valorDeCusto <= 0) 
            break;
        
        printf("Valor de venda: ");
        scanf("%f", &valorDeVenda);
        
        printf("Quantidade de Vendas: ");
        scanf("%d", &quantVendas);
        
        totalMerc++;
        totalFat += valorDeVenda;
        lucroTotal += valorDeVenda - valorDeCusto;

    }
    

    printf("+----------- Balanco do Armazem -----------+\n");
    printf("| Mercadorias: %27d |\n", totalMerc);
    printf("| Faturamento: %27.2f |\n", totalFat);
    printf("| Lucro: %33.2f |\n", lucroTotal);
    printf("+------------------------------------------+\n");

    
}
