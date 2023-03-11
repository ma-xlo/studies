#include <stdio.h>

int main() {

    double parcela = 4.f, div=3.f, pi;
    
    for(int i=1; (4/div) >= 0.000001; i++) {
        if(i % 2 != 0) 
            parcela -= 4/div; 
        else 
            parcela += 4/div; 
        
        div += 2;
        printf("%lf\n", parcela);
    }
    //pi = parcela;
    //printf("%lf\n", pi);
    
    return 0;
}
