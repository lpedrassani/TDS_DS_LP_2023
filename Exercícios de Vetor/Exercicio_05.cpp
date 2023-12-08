#include<stdio.h>

int main()
{
    int A[5], pma, pme, i, vma, vme;

    for(i=0;i<5;i++)
    {
        printf("Informe um valor para a posicao %d: ", i);
        scanf("%d", &A[i]);
    }

    pma=A[0];
    pme=A[0];

    for(i=0;i<5;i++)
    {
        if(A[i]>vma)
        {

            vma=A[i];
            pma=i;
        }
        if(A[i]<vme)
        {
            vme=A[i];
            pme=i;
        }
    }

    printf("\nA posicao do vetor maior e: %d", pma);
    printf("\nA posicao do vetor menor e: %d", pme);

    return 0;
}
