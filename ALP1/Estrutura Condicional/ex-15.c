#include <stdio.h>
void main()
{
	char x;
	printf("Caracter: ");
    x = getchar();
    printf("ASCII: %d\n", x);
	if(x >= 60 && x <= 90)
		printf("Tipo: Maiuscula\n");
	else
		printf("Tipo: Minuscula\n");
}