#include <stdio.h>
void main()
{
float x, y, z, media;

	printf(“Digite a primeira nota: ”);
	scanf("%.1f", &x);
	printf(“Digite a segunda nota: ”);
	scanf("%.1f", &y);
	printf(“Digite a terceira nota: ”);
	scanf("%.1f", &z);
	
	media = (x + y + z) / 3;
	
	if(media == 7)
		printf(“Aprovado ;)!\n”);
	else
		printf(“Ira para prova final =/.\n”);
}
