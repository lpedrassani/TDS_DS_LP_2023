/*5) Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o maior e o menor valor.*/

#include<stdio.h>

int main()
{
    int A[5], ma, me, i, j;

    for(i=0;i<=4;i++)
    {
        printf("Informe um numero (Posicao %d): ", i);
        scanf("%d", &A[i]);
        me=A[i];
        ma=A[i];
    }




    printf("\nO menor da lista esta na posicao: %d", me);
    printf("\nO maior da lista esta na posicao: %d\n", ma);

    return 0;
}
