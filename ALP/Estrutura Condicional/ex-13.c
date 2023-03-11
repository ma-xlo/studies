#include <stdio.h>
void main()
{
	int x, idade;
	printf("Ano de nascimento: ");
	scanf("%d", &x);
    idade = 2022 - x;
	if(idade >= 18)
		printf("Maior de idade.\n");
	else
		printf("Menor de idade.\n");
}