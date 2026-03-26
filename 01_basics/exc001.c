/******************************************************************************
Crie um programa que pede 5 números
inteiros pelo teclado e imprime as seguintes
informações:
– a soma de todos os números
– o produto de todos os números
*******************************************************************************/

#include <stdio.h>

int main(void){

    int num1, num2, num3, num4, num5, soma, produto;

    printf("Digite 5 numeros inteiros: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    soma = num1 + num2 + num3 + num4 + num5;
    produto = num1*num2*num3*num4*num5;

    printf("\nA soma e igual %d e o produto e igual a %d", soma, produto);

    return 0;
}