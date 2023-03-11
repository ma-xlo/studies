#include <stdio.h>

//Declarações de contantes
#define TEC_PORCENT 0.30
#define GER_PORCENT 0.20
#define FUNC_PORCENT 0.15

void main() {

    //Declarações de variaveis
    int categoria;
    float salario;
    
    //Menu de categorias
    printf("[1] Gerente\n");
    printf("[2] Tecnico\n");
    printf("[3] Funcionario\n");

    //Entrada de dados
    printf("Opcao: ");
    scanf("%d", &categoria);
    printf("Salario: ");
    scanf("%f", &salario);

    switch (categoria)
    {
    case 1:
        //Caso a categoria escolhida for a de gerente
        printf("Reajuste: R$%.2f\n", salario + (salario * GER_PORCENT));
        break;
    case 2:
        //Caso a categoria escolhida for a de tecnico
        printf("Reajuste: R$%.2f\n", salario + salario * TEC_PORCENT);
        break;
    case 3:
        //Caso a categoria escolhida for a de funcionario
        printf("Reajuste: R$%.2f\n", salario + salario * FUNC_PORCENT);
        break;    
    default:
        break;
    }
}