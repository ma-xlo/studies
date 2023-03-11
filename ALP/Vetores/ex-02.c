#include <stdio.h>

#define MAX_ITEMS 5

int main() {
    float valorMerc[5], faturamento, v_menosVendida;
    int quantVendida[5], mercMenosVend, mercMaisVend;
    int qtdAcimaMenosVd=0;

    // Armazenamento de preçoes e quantidades vendidas
    for(int i=0; i < MAX_ITEMS; i++) {
        printf("Valor da mercadoria %iº: ", i+1);
        scanf("%f", &valorMerc[i]);

        if(valorMerc[i] == 0)
            break;

        printf("Quantidade vendida: ");
        scanf("%d", &quantVendida[i]);
    }

    for(int i=0; i < MAX_ITEMS; i++) {
        faturamento += valorMerc[i];
    }

    // Definir quantidades vendas extremas
    mercMenosVend = quantVendida[0];
    mercMaisVend = quantVendida[0];
    for(int i=1; i < MAX_ITEMS; i++) {
        if(mercMenosVend < quantVendida[i])
            mercMenosVend = quantVendida[i];
        if(mercMaisVend > quantVendida[i])
            mercMaisVend = quantVendida[i];
    }

    // Definir quantidade menos vendida
    v_menosVendida = valorMerc[0];
    for(int i=0; i < MAX_ITEMS; i++) {
        if(valorMerc[i] < v_menosVendida)
            v_menosVendida = valorMerc[i];
    }

    // Define o numero de mercadorias com o preço maior do que
    // o preço da menos vendida. 
    for(int i=0; i < MAX_ITEMS; i++) {
        if(valorMerc[i] > v_menosVendida)
            qtdAcimaMenosVd++;
    }

    printf("---------------------------------------------\n");
    printf(" Faturamento: %18s%.2f\n", "R$", faturamento);
    printf(" Menos vendida: %15d unidade(s)\n", mercMaisVend);
    printf(" Mais vendida: %15c%d unidade(s)\n", ' ', mercMenosVend);
    printf(" Valor menos vendida: %10s%.2f\n", "R$", v_menosVendida);
    printf(" Qtd. acima da menos vendida: %d unidade(s)\n", qtdAcimaMenosVd);
    printf("---------------------------------------------\n");

}