//Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a soma dos seus algarismos.

#include<stdio.h>

int main()
{
    int num, soma=0, digit;

    do
    {
        printf("Informe um numero: ");
        scanf("%d", &num);
        if(num<=0)
        {
            printf("Numero Invalido\n\n");
        }
    }while(num<=0);

    do
    {
        digit = num%10;
        num = num/10;
        soma = soma+digit;

    }while(num>=10);

    soma = soma+num;

    printf("A soma dos numeros e: %d\n", soma);

    return 0;
}
