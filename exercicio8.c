#include <stdio.h>

int main()
{
    // Desenvolva um programa que leia um número e verifique se ele está entre 10 e 50.

    float numero1;

    printf("digite um numero \n");
    scanf("%f", &numero1);

    if (numero1 >= 10 && numero1 <= 50) {
        printf("o seu numero esta entre 10 e 50");
    }
    else {
        printf("o seu numero nao esta entre 10 e 50");
    }

    return 0;
}