#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *fich;
    int nl;
    char sentence[100], vetor[100];
    char *vp;
    vp = vetor;

    printf("Numero de linhas: ");
    scanf("%d \n", &nl);

    int tot = nl;

    fich = fopen("ficheiro.txt", "w+");
    
    for(int i = 0; i < nl; i++)
    {
        scanf("%s", &sentence);
        fputs(sentence, fich);
        fputs("\n", fich);
    }
    while(!feof(fich))
    {
        fscanf(fich, "%s", vp);
        vp++;
    }
    vp = vetor;

    printf("O vetor contem: \n");
    for(int i = 0; i < tot; i++)
    {
        printf("%s \n", vp);
        vp++;
    }
}