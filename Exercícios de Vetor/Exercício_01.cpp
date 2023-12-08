/*1) Faça um programa que possua um A denominado A que armazene 6 números inteiros. O programa deve executar os seguintes passos:
Atribua os seguintes valores a esse A: 1, 0, 5, -2, -5, 7.
Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] e A[5] do A e mostre na tela esta soma.
Modifique o A na posição 4, atribuindo a esta posição o valor 100.
Mostre na tela cada valor do A A, um em cada linha.*/

#include<stdio.h>

int main()
{
    int A[6], soma=0, i;

    A[0]=1;
    A[1]=0;
    A[2]=5;
    A[3]=-2;
    A[4]=-5;
    A[5]=7;

    soma = A[0]+ A[1]+ A[5];
    printf("A soma: %d\n", soma);

    A[4]= 100;

    for(i=0;i<=5;i++)
    {
        printf("\n%d", A[i]);
    }

    return 0;
}
