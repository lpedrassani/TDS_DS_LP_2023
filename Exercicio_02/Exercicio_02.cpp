#include<stdio.h>

int main()
{
    printf("Vetores\n");
    char cores[4];
    int i;

    cores[0]= 'A';
    cores[1]= 'B';
    cores[2]= 'C';
    cores[3]= 'D';

    for(i=0;i<4;i++)
    {
        printf("O valor de cores da posicao %d eh: %c\n", i, cores[i]);
    }
    return 0;
}
