#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 100

// 6.1

int ordenada(int vec[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        if (vec[i] > vec[i+1]) return 0;
    }
    return 1;
}

// 6.2

int desordem(int vec[], int size)
{
    int soma = 0;
    for(int i = 0; i < size - 1; i++)
    {
        if (vec[i] > vec[i+1]) soma++;
    }
    return soma;
}

// 6.3

void sort_cresc(int arr[], int size)
{
    int temp;
    for(int i = 0; i < size - 1; i++)
    {
        for(int k = i + 1; k < size; k++)
        {
            if (arr[i] > arr[k])
            {
                temp = arr[k];
                arr[k] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void printarr(int arr[], int size)
{

    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 6.4

void segundo_menor(int vec[], int size)
{
    sort_cresc(vec, size);
    printf("Segundo Menor: %d", vec[1]);
    printf("\n");
}

// 6.5

void sort_desc(int arr[], int size)
{
    int temp;
    for(int i = 0; i < size - 1; i++)
    {
        for(int k = i + 1; k < size; k++)
        {
            if (arr[i] < arr[k])
            {
                temp = arr[k];
                arr[k] = arr[i];
                arr[i] = temp;
            }
        }
    }
}



int main()
{
    int array[SIZE];
    int temp, tam;

    printf("Tamanho do array: ");
    scanf("%d", &tam);
    printf("\n");

    printf("Elementos do array:\n");
    scanf("%d", &temp);

    for (int i = 0; temp != 0; i++)
    {
        array[i] = temp;
        scanf("%d", &temp);
    }
    printf("Array dado:");
    printarr(array, tam);

    segundo_menor(array, tam);

    printf("Array ordenado:");
    printarr(array, tam);

    printf("Array ordenado (descrescente):");
    sort_desc(array, tam);
    printarr(array, tam);


}