/*
    Faça um algoritmo que leia o salário de um funcionário e mostre seu novo salário, com 15% de aumento.
*/

#include <stdio.h>

int main(void){

    float salario, salarioComAumento;

    printf("\nEntre com o valor do salário: \t");
    scanf("%f", &salario);

    salarioComAumento = salario + (salario * 15 / 100);

    printf("\nO salário foi aumentado para R$%.2f.\n\n", salarioComAumento);

    return 0;
}
