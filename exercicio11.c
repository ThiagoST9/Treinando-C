#include <stdio.h>

int main()
{
    //Escreva um programa que lê três números e em seguida imprime quantos deles são iguais.

    int numero1, numero2, numero3;

    printf("digite um numero \n");
    scanf("%d", &numero1);

    printf("digite um segundo numero \n");
    scanf("%d", &numero2);

    printf("digite um terceiro numero \n");
    scanf("%d", &numero3);

    if (numero1 == numero2 && numero1 == numero3) {
        printf("existem 3 numeros iguais");
    }
    else if (numero1 == numero2 || numero1 == numero3 || numero2 == numero3) {
        printf("existem 2 numeros iguais");
    }
    else {
    printf("não existem numeros iguais");
    }

    return 0;
}