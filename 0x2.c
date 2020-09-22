/*
        Crie uma calculadora de operadores binários básico (+, -, *, /).
*/

#include <stdio.h>

int main(void){

    int op;
    float n1, n2, resultado;

    printf("\nOPERAÇÔES BINÁRIAS\n1 --> Soma;\n2 --> Subtração;\n3 --> Multiplicação;\n4 --> Divisão.");
    printf("\nInforme a operação que pretende realizar: \t");
    scanf("%d", &op);
    
    if(op == 1){

        printf("\nInforme o primeiro número: \t");
        scanf("%f", &n1);
        printf("\nInforme o primeiro número: \t");
        scanf("%f", &n2);

        resultado = n1 + n2;
        printf("A soma entre %f e %f é %f\n", n1, n2, resultado);

    }if(op == 2){

        printf("\nInforme o primeiro número: \t");
        scanf("%f", &n1);
        printf("\nInforme o primeiro número: \t");
        scanf("%f", &n2);

        resultado = n1 - n2;
        printf("A subtração entre %f e %f é %f\n", n1, n2, resultado);

    }if(op == 3){

        printf("\nInforme o primeiro número: \t");
        scanf("%f", &n1);
        printf("\nInforme o primeiro número: \t");
        scanf("%f", &n2);

        resultado = n1 * n2;
        printf("A multiplicação entre %f e %f é %f\n", n1, n2, resultado);

    }if(op == 4){

        printf("\nInforme o primeiro número: \t");
        scanf("%f", &n1);
        printf("\nInforme o primeiro número: \t");
        scanf("%f", &n2);

        resultado = n1 / n2;
        printf("A divisão entre %f e %f é %f\n", n1, n2, resultado);

    }
    return 0;
}