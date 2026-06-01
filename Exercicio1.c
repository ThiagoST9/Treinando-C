#include <stdio.h>
 
int main()
{
    /*1 Crie um algoritmo que leia um numero inteiro e verifique se ele e positivo, negativo ou zero.*/

    int numero1;
    printf("digite um numero inteiro: \n");
    scanf("%d", &numero1);

    if (numero1 >0) {
        printf("seu numero e positivo \n");
    }
    else if (numero1 <0) {
        printf("seu numero e negativo \n");
    }
    else {
        printf("seu numero e zero \n");
    }

    return 0;
}
