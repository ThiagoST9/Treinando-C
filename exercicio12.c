#include <stdio.h>

int main()
{
    int numero1, numero2, numero3;

    printf("digite um numero \n");
    scanf("%d", &numero1);

    printf("digite um segundo numero \n");
    scanf("%d", &numero2);

    printf("digite um terceiro numero \n");
    scanf("%d", &numero3);

    if (numero1 <= numero2 && numero1 <= numero3) {
        if (numero2 <= numero3) {
            printf("ordem crescente: %d %d %d", numero1, numero2, numero3);
        } else {
            printf("ordem crescente: %d %d %d", numero1, numero3, numero2);
        }
    }
    else if (numero2 <= numero1 && numero2 <= numero3) {
        if (numero1 <= numero3) {
            printf("ordem crescente: %d %d %d", numero2, numero1, numero3);
        } else {
            printf("ordem crescente: %d %d %d", numero2, numero3, numero1);
        }
    }
    else {
        if (numero1 <= numero2) {
            printf("ordem crescente: %d %d %d", numero3, numero1, numero2);
        } else {
            printf("ordem crescente: %d %d %d", numero3, numero2, numero1);
        }
    }

    return 0;
}