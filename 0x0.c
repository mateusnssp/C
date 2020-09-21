#include <stdio.h>

int main(void){

    int a, b, sum;

    printf("\nDefina um valor para a: \t");
    scanf("%d", &a);
    
    printf("\nDefina um valor para b: \t");
    scanf("%d", &b);

    sum = a + b;
    printf("A soma entre a e b é %d.\n", sum);

    return 0;

}