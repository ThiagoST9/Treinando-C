#include <stdio.h>
#include <ctype.h>

int main()
{
    //Faça um algoritmo que leia o sexo de uma pessoa (M ou F) e exiba uma mensagem correspondente.

    char sexo;

    printf("digite o seu sexo (ex: M ou F): ");
    scanf("%s", &sexo);

    sexo = toupper(sexo); // converte para maiúsculo (achei na net)
    
    if (sexo == 'M') {
        printf("o seu sexo e masculino");
    }
    else if (sexo == 'F') {
        printf("o seu sexo e feminino");
    }
    else {
        printf("não me identifico com os generos descritos");
    }

    return 0;
}