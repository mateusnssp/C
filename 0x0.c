//  Crie um programa que entrege a soma entre dois valores indicados pelo usuário.

#include <stdio.h>

int main(void){

    /*
            printf("%tipo_da_variável_var1 %tipo_da_variável_var2", var1, var2)

            % --> Imprime o caractere

            i --> Interio
            d --> Inteiro
            c --> Caracter
            f --> Ponto flutuante
    */


    int a, b, sum;

    printf("\nDefina um valor para a: \t");
    scanf("%d", &a);
    
    printf("\nDefina um valor para b: \t");
    scanf("%d", &b);

    sum = a + b;
    printf("A soma entre a e b é %d.\n", sum);

    return 0;

}