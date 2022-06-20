#include <stdio.h>
#include <stdlib.h>

void escreve_linhas()
{
    FILE *f;
    int k, i = 1;
    printf("Numero de linhas: ");
    scanf("%d", &k);
    f = fopen("linhas.txt", "w");
    while(i <= k)
    {
        fprintf(f, "linha %d\n", i);
        i++;
    }
    fclose(f);
}

void ler_linhas()
{
    FILE *f;
    char linhas[128][16];
    f = fopen("linhas.txt", "r");
}

void main()
{

}