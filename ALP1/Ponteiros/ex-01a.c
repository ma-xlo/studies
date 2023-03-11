
void main() 
{   
    //Declaração da variavel "x" e do ponteiro "*pX" ambos do tipo int
    int x, *pX; 
    //Atribuição do valor 10 a variavel "x"
    x = 10; 
    //Atribuição do endereço da variavel "x" ao ponteiro "pX"
    pX = &x; 

    printf("x = %d\n",x); 
    //-> 10
    printf("*pX = %d\n",*pX); 
    //-> 10
    printf("pX = %p\n",pX); 
    //-> Endereço da variavel x (por indireção)
    printf("&x = %p\n",&x); 
    //-> Endereço da variavel x

} 
