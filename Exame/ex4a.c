#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node *novo_elemento(int info)
{   
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p != NULL) 
    {
        p->info = info;
        p->next = NULL;
    }
    return p;
}
struct node *ins_inicio(struct node *first, int info)
{
    struct node *p = novo_elemento(info);
    if(p == NULL) return first;

    p->next = first;
    return p;
}

void imprimir(struct node *first)
{
    struct node *p = NULL;
    p = first;
    for(p; p != NULL; p = p->next)
    {
        printf("%d", p->info);
    }
}

int main()
{
    int i;
    struct node *first = NULL;

    while (1)
    {
        scanf("%d", &i);
        if (i == 0)
            break;
        first = ins_inicio(first, i);
    }

    imprimir(first);

    return 0;
}