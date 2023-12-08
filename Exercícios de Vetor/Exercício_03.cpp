/*3) Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.*/

#include<stdio.h>

int main()
{
    int A[10], contPar=0, i=0;


    for(i=0;i<=9;i++)
    {
        printf("Informe um numero: ");
        scanf("%d", &A[i]);
        if((A[i]%2)==0)
        {
            contPar++;
        }
    }
    printf("\nForam inseridos %d numeros pares", contPar);

    return 0;
}
