#include <stdio.h>

int main()
{
    //Crie um programa que leia um número e informe se ele é par ou ímpar.
    
    int numero1;
    printf("digite um numero: \n");
    scanf("%d", &numero1);

    if (numero1 % 2 == 0) {
        printf("seu numero e par \n");
    }
    else {
        printf("seu numero e impar");
    }

    return 0;
}