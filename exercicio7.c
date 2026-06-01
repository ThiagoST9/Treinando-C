#include <stdio.h>

int main()
{
    /*Crie um algoritmo que leia o salário de um funcionário e aplique:
aumento de 10% se o salário for menor que 1000
aumento de 5% caso contrário*/

float salario, aumento10, aumento5;

printf("digite o seu salario: \n");
scanf("%f", &salario);


if (salario < 1000) {
    aumento10 = salario + (salario * 10/100);
    printf("seu salario e: %.2f", aumento10);
}
else {
    aumento5 = salario + (salario * 5/100);
    printf("seu salario e: %.2f", aumento5);
}
    return 0;
}