#include <stdio.h>

// Constantes
#define COEF_MATUTINO 0.10
#define COEF_VESPERT 0.15
#define COEF_NOTURNO  0.12

int main() {
	
	// Declaração de variáveis
	float salarioMin, coefSalario, salarioBruto;
	int horasTrabalhadas;
	char turno, categoria;
	
	//Entrada de dados
	printf("Salario minimo: ");
	scanf("%f", &salarioMin);
	printf("Turno: ");
	scanf(" %c", &turno);
	printf("Categoria: ");
	scanf(" %c", &categoria);
	printf("Horas trabalhadas: ");
	scanf(" %d", &horasTrabalhadas);
	printf("\n");
	printf("--------------------------------\n\n");
	
	switch(turno) {
		case 'M':
			coefSalario = salarioMin * COEF_MATUTINO;
			salarioBruto = coefSalario * horasTrabalhadas;
			printf("Coeficiente do salario: R$%.2f\n", coefSalario);
			printf("Salario bruto: R$%.2f\n", salarioBruto);
				if(categoria == 'O') {
					if(salarioBruto >= 3000)
						printf("Imposto: %.2f\n", 0.05 * salarioBruto);
					else
						printf("Imposto: RS%.2f\n", 0.03 * salarioBruto);
					
					if(coefSalario <= 140) 
						printf("Auxilio Alimentacao: R$%.2f\n", salarioBruto / 3);
					else
						printf("Auxilio Alimentacao: R$%.2f\n", salarioBruto / 2);
					
				}
				if(categoria == 'G') {
					if(salarioBruto >= 4000)
						printf("Imposto: %.2f\n", 0.06* salarioBruto);
					else
						printf("Imposto: RS%.2f\n", 0.04 * salarioBruto);
				}
						
			break;
		case 'V':
			coefSalario = salarioMin * COEF_VESPERT;
			salarioBruto = coefSalario * horasTrabalhadas;
			printf("Coeficiente do salario: R$%.2f\n", coefSalario);
			printf("Salario bruto: R$%.2f\n", salarioBruto);
				if(categoria == 'O') {
					if(salarioBruto >= 3000)
						printf("Imposto: %.2f\n", 0.05 * salarioBruto);
					else
						printf("Imposto: RS%.2f\n", 0.03 * salarioBruto);
					
					if(coefSalario <= 140) 
						printf("Auxilio Alimentacao: R$%.2f\n", salarioBruto / 3);
					else
						printf("Auxilio Alimentacao: R$%.2f\n", salarioBruto / 2);
					
				}
				
				if(categoria == 'G') {
					if(salarioBruto >= 4000)
						printf("Imposto: %.2f\n", 0.06* salarioBruto);
					else
						printf("Imposto: RS%.2f\n", 0.04 * salarioBruto);
				}
			break;
		case 'N':
			coefSalario = salarioMin * COEF_NOTURNO;
			salarioBruto = coefSalario * horasTrabalhadas;
			printf("Coeficiente do salario: R$%.2f\n", coefSalario);
			printf("Salario bruto: R$%.2f\n", salarioBruto);
				if(categoria == 'O') {
					if(salarioBruto >= 3000)
						printf("Imposto: %.2f\n", 0.05 * salarioBruto);
					else
						printf("Imposto: RS%.2f\n", 0.03 * salarioBruto);
						
					if(coefSalario <= 140) 
						printf("Auxilio Alimentacao: R$%.2f\n", salarioBruto / 3);
					else
						printf("Auxilio Alimentacao: R$%.2f\n", salarioBruto / 2);
				}
				if(categoria == 'G') {
					if(salarioBruto >= 4000)
						printf("Imposto: R$%.2f\n", 0.06* salarioBruto);
					else
						printf("Imposto: R$%.2f\n", 0.04 * salarioBruto);
				}
				
				if(horasTrabalhadas > 80) {
					printf("Gratificacao: R$%.2f\n", 500);
				} else {
					printf("Gratificacao: R$%.2f\n", 300);
				}	
			break;
		default:
			break;
	}
	//test
	return 0;
}
