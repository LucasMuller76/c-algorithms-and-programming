/*
 Uma determinada disciplina possui apenas 3
avaliações: o trabalho (que vale 10% da nota), a
prova (que vale 60% da nota) e o teste (que vale
30% da nota).
Crie um programa que pede para o usuário digitar
as notas que ele tirou nestas avaliações e imprime
na tela a nota final do aluno.
 */

#include <stdio.h>

int main(){
    double trabalho, prova, teste, nota_final;

    printf("Digite as 3 notas: ");
    scanf("%lf %lf %lf", &trabalho, &prova, &teste);

    nota_final = ((trabalho * 10) + (prova * 60) + (teste * 30))/100;
    printf("\nSua nota final e: %.2f", nota_final);

    return 0;
}