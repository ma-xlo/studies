#include <stdio.h>

int fibonacci(int n) {
  int x;
  
  if (n == 1) {
    return(1);
  }
  
  if (n == 2) {
    return(1);
  }
  x = fibonacci(n-1) + fibonacci(n-2);
  return(x);
}

void main() {

    printf("%d", fibonacci(10));


}