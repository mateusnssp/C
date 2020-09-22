/*
    Escreva um programa que leia quatro notas de um aluno, calcula a média entre elas
    e retorne se o aluno está aprovado, reprovado ou em recuperação, sendo:
    (nota < 4)             --> reprovado;
    (nota >= 4 e nota < 6) --> recuperando;
    (nota >= 6)            --> aprovado.
*/

#include <stdio.h>

int main(void){

    float notas[4], media;

    printf("\nNota 1: \t");
    scanf("%f", &notas[0]);
    printf("\nNota 2: \t");
    scanf("%f", &notas[1]);
    printf("\nNota 3: \t");
    scanf("%f", &notas[2]);
    printf("\nNota 4: \t");
    scanf("%f", &notas[3]);

    media = (notas[0] + notas[1] + notas[2] + notas[3]) / 4;

    if(media < 4){
        printf("\nAluno reprovado.\n");
    }if(media >= 4 && media < 6){
        printf("\nAluno está em recuperação.\n");
    }if(media >= 6){
        printf("\nAluno está aprovado.\n");
    }


    return 0;
}

