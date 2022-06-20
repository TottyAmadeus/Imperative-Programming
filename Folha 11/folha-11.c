#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

void escreve_linhas(char *nome_ficheiro)
{
    FILE *f;
    f = fopen(nome_ficheiro, "w");
    int k, i = 1;
    printf("Numero de linhas: ");
    scanf("%d", &k);
    while(i <= k)
    {
        fprintf(f, "linha %d", i);
        i++;
    }
    fclose(f);
}

void ler_linhas(char *nome_ficheiro)
{
    FILE *f;
    f = fopen(nome_ficheiro, "r");
    int i = 0, k= 0;
    char linhas[SIZE][SIZE], str[SIZE];
    while(fgets(linhas[i], SIZE, f))
    {
            puts(linhas[i]);
            i++;
    }
}

int numero_linhas(char *nome_ficheiro)
{
    FILE *f;
    f = fopen(nome_ficheiro, "r");
    int i = 0;
    char str[SIZE];
    while(fgets(str, SIZE, f))
    {
            i++;
    }
    return i;
}

void unir_ficheiro()
{
    FILE *f1, *f2, *u;
    f1 = fopen("ficheiro1.txt", "r");
    f2 = fopen("ficheiro2.txt", "r");
    u = fopen("uniao.txt", "a");
    int i = 0;
    char str[SIZE];
    while(fgets(str, SIZE, f1))
    {
            fputs(str, u);
    }
    while(fgets(str, SIZE, f2))
    {
            fputs(str, u);
    }
    
}

void main()
{
    unir_ficheiro();
}