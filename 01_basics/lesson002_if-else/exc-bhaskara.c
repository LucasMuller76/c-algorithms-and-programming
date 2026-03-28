/*
Faça um programa em C que:
– Uma equação do segundo grau possui o seguinte formato:
• ax2 + bx + c = 0
– Para resolver esta equação, devemos encontrar as duas raízes, x’ e x’’.
Usamos, então, a fórmula de Báskara:
– Assim sendo, crie um programa em C que recebe os valores inteiros a, b
e c e retorna as duas raízes da equação de segundo grau
correspondente.
• x’ é a raiz positiva
• x’’ é a raiz negativa
*/

#include <stdio.h>
#include <math.h> // para sqrt

int main() {
    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    if (a == 0) {
        printf("Nao e uma equacao do segundo grau\n");
    } else {
        int delta = (b * b) - (4 * a * c);

        if (delta < 0) {
            printf("Nao existem raizes reais\n");
        } else {
            float x1, x2;
            float raiz_delta = sqrt(delta);

            x1 = (-b + raiz_delta) / (2.0 * a); // raiz positiva
            x2 = (-b - raiz_delta) / (2.0 * a); // raiz negativa

            printf("Raiz positiva (x') = %.2f\n", x1);
            printf("Raiz negativa (x'') = %.2f\n", x2);
        }
    }

    return 0;
}