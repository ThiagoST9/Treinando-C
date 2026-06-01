#include <stdio.h>
 
int main()
{
    /*2 O IMC – Índice de Massa Corporal é um critério da Organização Mundial de Saúde para dar uma indicação sobre a condição
 de peso de uma pessoa adulta. A formula é: IMC = peso/𝑎𝑙𝑡𝑢𝑟𝑎² Elabore um algoritmo que leia o peso e a altura de um adulto e mostre 
 o IMC e a sua condição de acordo com a tabela abaixo.
IMC em adultos Condição

Abaixo de 18,5 --- Abaixo do peso 
Entre 18,5 e 25 -- Peso normal 
Entre 25 e 30  --- Acima do peso 
Acima de 30 -- obeso */

    float peso, altura, imc;

    printf("digite o seu peso: \n");
    scanf("%f", &peso);

    printf("digite a sua altura em metros: \n");
    scanf("%f", &altura);

    imc = peso /(altura * altura);
    printf("seu IMC e: %.2f \n", imc);

    if (imc < 18.5) {
        printf("e voce esta abaixo do peso \n");
    }
    else if (imc >= 18.5 && imc < 25) {
        printf("e voce esta com o peso normal \n");
    }
    else if (imc >=25 && imc < 30) {
        printf("e voce esta acima do peso \n");
    }
    else {
        printf("e voce esta obeso \n");
    }

}