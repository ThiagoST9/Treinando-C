#include <stdio.h>

int main()
{
    /* Faça um programa que leia três números e informe qual é o maior entre eles. */
    int numero1, numero2, numero3;

    printf("digite um numero \n");
    scanf("%d", &numero1);

    printf("digite um outro numero \n");
    scanf("%d", &numero2);

    printf("digite um terceiro numero \n");
    scanf("%d", &numero3);

    if (numero1 > numero2 && numero1 > numero3) {
        printf("o maior numero e: %d", numero1);
    }
    else if (numero2 > numero1 && numero2 > numero3) {
        printf("o maior numero e: %d", numero2);
    }
    else {
        printf("o maior numero e: %d", numero3);
    }

    return 0;
}