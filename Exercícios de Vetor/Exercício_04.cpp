/*4) Fa�a um programa que receba do usu�rio um vetor com 10 posi��es.
Em seguida, dever� ser impresso o maior e o menor elemento do vetor.*/

#include<stdio.h>

int main()
{
    int A[10], ma, me, i;

    for(i=0;i<=9;i++)
    {
        printf("Informe um numero: ");
        scanf("%d", &A[i]);
        me=A[i];
        ma=A[i];
    }
    for(i=0;i<=9;i++)
    {

        if(A[i]<me)
        {
            me=A[i];
        }
        else if(A[i]>ma)
        {
            ma=A[i];
        }
    }


    printf("\nO menor da lista e: %d", me);
    printf("\nO maior da lista e: %d", ma);

    return 0;
}
