#include <stdio.h>
 
int main()
{
    /*3.Faça um algoritmo que leia dois números e mostre qual deles é o maior.*/

    int numero1, numero2;

    printf("digite um numero: \n");
    scanf("%d", &numero1);

    printf("digite um outro numero: \n");
    scanf("%d", &numero2);

    if (numero1 > numero2) {
    printf("O maior numero e: %d \n", numero1);
    }
    else {
    printf("o maior numero e: %d \n", numero2);
    }
        
    return 0;
}