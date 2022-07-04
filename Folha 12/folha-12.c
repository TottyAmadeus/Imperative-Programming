#include <stdio.h>
#include <stdlib.h>


struct node
{
    int info;
    struct node *next;
};

struct node *create_node(int info)
{
    struct node *p = (struct node *)malloc(sizeof(struct node)); // Criamos um modelo de node
    if (p != NULL) // Caso não dê para criar p, ele dá return a NULL
    {
        p->info = info;
        p->next = NULL; // Neste momento temos um node com a info dada que leva a lado nenhum
    }
    return p; //Vamos dar return ao endereço que aponta para ele
}

struct node *add_to_top(int info, struct node *list)
{
    struct node *p = create_node(info);
    if(p == NULL) return list;

    p->next = list;  // Pomos o node como o elemento mais acima
    return p;        // Retornamos o elemento mais acima
}

struct node *add_to_bottom(int info, struct node *list)
{
    struct node *p = create_node(info);
    struct node *curr = NULL;
    if (p == NULL)
    {
        return list;
    }
    if (list == NULL)
    {
        list = p;
        return list;
    }

    for(curr = list; curr->next != NULL; curr = curr->next);
    curr->next = p;
    return list;
}

void print_node_infos(struct node *list)
{
    struct node *p = NULL;
    p = list;
    for(p; p != NULL; p = p->next)
    {
        printf("%d\n", p->info);
    }
}

struct node *delete_node(int info, struct node *list)
{
    struct node *curr , *prev;
    
    for(curr = list, prev = NULL;
        curr != NULL && curr->info != info;
        prev = curr, curr = curr->next);
    if(curr == NULL)
    {
        return list;
    }
    if(prev == NULL)
    {
        list = list->next;
    } else prev->next = curr->next;
    free(curr);
    return list;
}

void main()
{
    struct node *top = NULL; // Criamos um node terminal
    top = add_to_top(10, top);
    top = add_to_top(20, top);
    top = add_to_bottom(30, top);
    top = add_to_bottom(40, top);
    top = delete_node(20, top);
    print_node_infos(top);
}