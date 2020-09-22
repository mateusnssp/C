/*
    Crie um programa que importe a biblioteca <math.h> e a utilize para retornar a 
    raíz quadrada de um número.
*/

#include <stdio.h>
#include <math.h>

int main(void){

    int num, sqrt_num;

    printf("\nInforme um número: \t");
    scanf("%d", &num);

    sqrt_num = sqrt(num);
    printf("A raíz quadrada de %d é %d.\n", num, sqrt_num);

    return 0;
}