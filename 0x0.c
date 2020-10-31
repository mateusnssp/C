//  Crie um programa que entrege a soma entre dois valores indicados pelo usuário.

#include <stdio.h>

int main(void)
{
    /*
            printf("%tipo_da_variável_var1 %tipo_da_variável_var2", var1, var2)
            % --> Imprime o caractere
            i --> Interio
            d --> Inteiro
            c --> Caracter
            f --> Ponto flutuante
    */

    int num1, num2, sum;

    printf("Informe o primeiro número: \n");
    scanf("%i", &num1);
    printf("Informe o segundo número: \n");
    scanf("%i", &num2);

    sum = num1 + num2;

    printf("A dos dois números é igual a %i.\n", sum);

    
    return 0;
}