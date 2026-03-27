/******************************************************************************
Crie um programa que pede 5 números inteiros
pelo teclado e armazena-os, respectivamente, nas
variáveis A, B, C, D e E. Em seguida, faça o que se
pede:
– sabendo que B e C são respectivamente a base e a altura
de um triângulo, imprima a área deste triângulo
– sabendo que A, B, C e D formam um retângulo, imprima o
perímetro deste retângulo
– sabendo que E é o valor do raio de um determinado
círculo, imprima a área deste círculo
*******************************************************************************/

#include <stdio.h>
#define pi 3.1415
#include <math.h>

int main(void){

    double A, B, C, D, E, area_triangulo, prerimetro_retangulo, area_circulo;

    printf("Digite 5 numeros: ");
    scanf("%f %f %f %f %f", &A, &B, &C, &D, &E);

    area_triangulo = (B * C)/2;
    printf("\nA area do triangulo e igual a %.2f", area_triangulo);

    prerimetro_retangulo = A + B + C + D + E;
    printf("\nO perimetro do retangulo e igual a: %.2f", prerimetro_retangulo);

    area_circulo = pi * pow(E,2);
    printf("\nA area do circulo e igual a: %.2f", area_circulo);

    return 0;
}