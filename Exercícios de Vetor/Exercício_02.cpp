/*/*2) Fa�a um programa que leia um vetor de 8 posi��es e, em seguida, leia tamb�m dois valores X e Y quaisquer correspondentes a duas posi��es no vetor.
Ao final, seu programa dever� escrever a soma dos valores encontrados nas respectivas posi��es X e Y.*/

#include<stdio.h>

int main()
{
    int i, A[8], x, y, soma=0;

    for(i=0;i<=7;i++)
    {
        printf("Informe um numero (Posicao %d): ", i);
        scanf("%d", &A[i]);
    }

    do
    {
        printf("\nEscolha uma posicao entre 0 a 7: ");
        scanf("%d", &x);
        if(x<0 || x>7)
        {
            printf("O valor deve estar entre 0 a 7");
        }

    }while(x<0 || x>7);

    soma = soma+A[x];
    do
    {
        printf("\nEscolha outra posicao entre 0 a 7: ");
        scanf("%d", &y);
        if(y<0 || y>7)
        {
            printf("O valor deve estar entre 7 a 0 ");
        }
    }while(y<0 || y>7);

    soma = soma + A[y];
    printf("A soma dessas posicoes e: %d\n", soma);

    return 0;
}
