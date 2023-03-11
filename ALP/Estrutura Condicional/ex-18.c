#include <stdio.h>
void main()
{
	float n1, n2, n3, menor;
	
    printf("Primeiro Numero: ");
    scanf("%f", &n1);
    printf("Segundo Numero: ");
    scanf("%f", &n2);
    printf("Terceiro Numero: ");
    scanf("%f", &n3);

    if(n1 <= n2 && n1 <= n3)
        printf("Menor: %f\n", n1);
    if(n2 <= n1 && n2 <= n3)
        printf("Menor: %f\n", n2);
    if(n3 <= n1 && n3 <= n2)
        printf("Menor: %f\n", n3);

}