#include <stdio.h>

void main()
{
	char peso;
	printf("Peso: ");
    scanf("%d", &peso);

	if(peso < 50 )
		printf("Palha\n");
	else if(peso < 59)
		printf("Pluma\n");
    else if(peso < 75)
		printf("Leve\n");
    else if(peso < 87)
		printf("Pesado\n");
    else
		printf("Super Pesado\n");
}       