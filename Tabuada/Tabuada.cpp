#include<stdio.h>

int main()
{
    int tabuada[9];
    int i, j, result=0, soma=0, somaTotal=0;


    for(i=1;i<=10;i++)
    {
        tabuada[i]=0;
        for(j=1;j<=10;j++)
        {
            result=i*j;
            printf("%d x %d = %d\n", i, j, result);
            soma = soma+result;
        }
        tabuada[i]= tabuada[i]+soma;
        printf("A soma da tabuada %d eh: %d\n", i, tabuada[i]);
        soma=0;
        somaTotal=somaTotal+tabuada[i];
    }
    printf("\nA soma total das tabuadas eh: %d\n", somaTotal);
    return 0;
}
