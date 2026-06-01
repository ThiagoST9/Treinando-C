#include <stdio.h>

int main()
{
    /* Crie um programa que leia dois números e uma operação (+, -, *, /) e mostre o resultado 
    (use estruturas condicionais para escolher a operação). */

    int numero1, numero2, operacao;

    printf("digite um numero \n");
    scanf("%d", &numero1);

    printf("digite um outro numero \n");
    scanf("%d", &numero2);

    printf("digite o simbolo da operacao ex:(+, -, *, /): \n");
    scanf(" %c", &operacao);

    if (operacao  == '+') {
        printf("resultado e: %d", numero1 + numero2);
    }
    else if (operacao == '-') {
        printf("resulto e: %d", numero1 - numero2);
    }
    else if (operacao == '*') {
        printf("resultado e: %d", numero1 * numero2);
    }
    else if (operacao == '/') {
        printf("resultado e: %d", numero1 / numero2);
    }
    else {
        printf("operacao invalida");
    }

    return 0;
}