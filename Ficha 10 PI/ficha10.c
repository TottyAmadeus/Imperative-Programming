#include "dados.h"

#define MAX 11
#define MAXNOME 100

typedef struct aluno {
char nome[MAXNOME], codigo[MAX];
int disc[MAX], nd;
} ALUNO;

typedef struct disciplina {
char nome[MAXNOME];
int ano;
} DISCIPLINA;



void procura(char palavranome[MAXNOME])
{
    scanf("%s", &palavranome);
    
}