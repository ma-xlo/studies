#include <stdio.h>
void main()
{
float x, y;

	printf(“Digite a segunda nota: ”);
	scanf("%.1f", &x);
	
	y = 14 - x ;
	
	if((x + y) / 2 >= 7)
		printf(“Esta na prova final!\n”);
	else
		printf(“Ira para prova final =/.\n”);
}
