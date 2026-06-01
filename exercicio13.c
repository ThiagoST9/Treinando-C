#include <stdio.h>

int main()
{
    /* Escreva um programa que solicita o usuário a digitar um numero de 1 à 7. Em seguida,
     o programa imprime uma mensagem de acordo com o numero digitado:

0 – “Você pertence ao EIXO TECNOLÓGICO”
1 - “Você pertence ao curso de ADS”
2 – “Você pertence ao curso de JOGOS DIGITAIS”
3 – “Você pertence ao curso de Moda”
4 – “Você pertence ao curso de Gastronomia”
5 – “Você pertence ao curso de Gestão”
6 – “Você pertence ao curso de Enfermagem”
7 – “Você pertence ao curso de Estética”
8 – “Você pertence a Pós Graduação”
Qualquer outro numero - “Você NÃO pertence a curso algum da FACULDADE SENAC” */

int numero;

printf("digite um numero de 0 a 8 \n");
scanf("%d", &numero);

if (numero == 0) {
    printf("Você pertence ao EIXO TECNOLÓGICO \n");
}
else if (numero == 1) {
    printf("Você pertence ao curso de ADS \n");
}
else if (numero == 2) {
printf("Você pertence ao curso de JOGOS DIGITAIS \n");
}
else if (numero == 3) {
    printf("Você pertence ao curso de Moda \n");
}
else if (numero == 4) {
    printf("Você pertence ao curso de Gastronomia \n");
}
else if (numero == 5) {
    printf("Você pertence ao curso de Gestão \n");
}
else if (numero == 6) {
    printf("Você pertence ao curso de Enfermagem \n");
}
else if (numero == 7) {
    printf("Você pertence ao curso de Estética \n");
}
else if (numero == 8) {
    printf("Você pertence a Pós Graduação \n");
}
else {
    printf("Você NÃO pertence a curso algum da FACULDADE SENAC \n");
}

    return 0;
}