#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include ".\dados-folha-10.h"

int comprimento(char str[])
{
    int i = 0;
    while(*str++ != '\0') i++;
    return i;
}

// 10.1

int is_in_string(char nome[], char nomecompleto[])
{
    int size_nome = comprimento(nome);
    for(int i = 0; nomecompleto[i+size_nome] != '\0'; i++)
    {
        // printf("Nome a testar: %s \n", nomecompleto);
        int j = 0;
        while(nome[j] != '\0' && nomecompleto[i+j] == nome[j])
        {
            j++;
        }
        if (nome[j] == '\0') return 1;
    }
    return 0;
}

void procura(char palavranome[])
{
    printf("Resultados de alunos pelo nome %s \n \n", palavranome);
    for(int i = 0; i < NAlunos; i++)
    {
        if(is_in_string(palavranome, Alunos[i].nome))
        {
            printf("%s %s\n", Alunos[i].codigo, Alunos[i].nome);
        }
    }
}

int main()
{
    char nome[MAXNOME];
    fgets(nome, MAXNOME, stdin);
    procura(nome);
}