#include <stdio.h>

#define BONUS_DEMAIS_FUNC 500.0F
#define ALIQ_BONUS_M 0.15
#define ALIQ_BONUS_F 0.25
#define TEMPO_SUP_M 15
#define TEMPO_SUP_F 10

void main()
{   
    float bonus, salario, salarioLiq;
    int tempo;
    char sexo;

	printf("Masculino(M) | Feminino(F)\n");
	printf("Sexo: ");
    sexo = getchar();

	printf("Salario: ");
    scanf("%f", &salario);

    printf("Tempo de casa: ");
    scanf("%d", &tempo);

    if(sexo == 'M' && tempo > TEMPO_SUP_M) {
        bonus = salario * ALIQ_BONUS_M;
        salarioLiq = salario + bonus;
    }
    else if(sexo == 'F' && tempo > TEMPO_SUP_F) {
        bonus = salario * ALIQ_BONUS_F;
        salarioLiq = salario + bonus;
    }
    else {
        bonus = BONUS_DEMAIS_FUNC;
        salarioLiq = salario + bonus;
    }

    printf("Bonus: R$%.2f\n", bonus);
    printf("Salario Liquido: R$%.2f\n", salarioLiq);
}