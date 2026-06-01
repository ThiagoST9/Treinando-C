#include <stdio.h>

int main()
{
    /*Desenvolva um algoritmo que leia duas notas de um aluno, cálculo e média aritmética e informe se ele está aprovado (media>= 7)
    ou reprovado.*/

    float nota1, nota2, media;

    printf("digite a sua primeira nota \n");
    scanf("%f", &nota1);

    printf("digite a sua segunda nota \n");
    scanf("%f", &nota2);


    media = (nota1 + nota2) / 2;
    printf("sua media e: %.2f e voce esta ", media);


    if (media >= 7) {
        printf("Aprovado.");
    }
    else {
        printf("Reprovado.");
    }

    return 0;
}