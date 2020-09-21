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