/*
    Crie um programa que importe a biblioteca <math.h> e a utilize para retornar a 
    raíz quadrada de um número.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int num, resultado;
    printf("Informe um núemro: ");
    scanf("%i", &num);

    resultado = sqrt(num);
    printf("A raiz quadrada de %i é %i.\n", num, resultado);

    return 0;
}