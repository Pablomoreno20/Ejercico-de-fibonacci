#include <stdio.h>
#include<time.h>
#include<stdlib.h>

int fibonacci(int n)
 {
 if (n < 0)
   {
    return 0; // Error handling for negative input
 }

 if (n <= 1) 
 {
    return n;
 }

 int a = 0;
 int b = 1;

 for (int i = 2; i <= n; i++)
   {
    int c = a + b;
    a = b;
    b = c;
 }

 return b;
}

int main()
 {
 int n;

 srand(time(NULL));

 n = rand() % 1000000;

 printf("Calculando las secuencias fibonacci\n");

 for (int i = 0; i < 100000; i++) 
 {
    int secuencia = i + 1;
    int numero = fibonacci(i);

    // Only print positive numbers
    if (numero > 0)
    {
        printf("Secuencia %d: %d\n", secuencia, numero);
    }
 }

 return 0;
}



