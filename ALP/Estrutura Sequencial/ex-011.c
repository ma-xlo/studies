/*Faça um programa que calcule a nota que um aluno deve tirar na terceira prova para
obter média 7, quaisquer que sejam as notas das duas primeiras provas. */

#include <stdio.h>

int main () {
  float nota1, nota2, nota3;


  printf("Digite a nota 1: ");
  scanf("%f", &nota1);
  printf("Digite a nota 2: ");
  scanf("%f", &nota2);
  nota3 = 21 - (nota1 + nota2);
    
    nota3 >= 10 || nota3 < 0 ? printf("Nota impossível") : printf("%.1f\n", nota3);
    
}
