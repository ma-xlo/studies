#include <stdio.h>

int main()
{
    int n = 4;

    if(n % 2 == 0)
        printf("Par!\n");
    
    else if(n % 2 == 0 || n == 4)
        printf("É igual a 4: Sim!\n");

    return 0;

}
