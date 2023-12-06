#include<stdio.h>

int main()
{
    int tabuada[9];
    int i, j, somaTotal=0, resultado[11];

    for(i=1;i<=10;i++)
    {
        resultado[i]=0;
        for(j=1;j<=10;j++)
        {
            resultado[i]=resultado[i]+(i*j);
            printf("%d x %d = %d\n", i, j, resultado[i]);
        }
        printf("A soma da tabuada %d eh: %d\n", i, resultado[i]);
        somaTotal=somaTotal+resultado[i];
    }
    printf("\nA soma total das tabuadas eh: %d\n", somaTotal);
    return 0;
}
