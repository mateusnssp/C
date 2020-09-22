/*
Faça um programa que leia a largura e a altura de uma parede em metros,
calcule a sua área e a quantidade de tinta necessária para pintá-la,
sabendo que cada litro de tinta, pinta uma área de 2 m².
*/

#include <stdio.h>

int main(void){

    float largura, altura, area;

    printf("\nInforme a largura: ");
    scanf("%f", &largura);

    printf("Informe a altura: ");
    scanf("%f", &altura);

    area = altura * largura;
    float tinta = area / 2;

    printf("Será necessário, %05f litros de tinta.\n", tinta);

    return 0;
}
