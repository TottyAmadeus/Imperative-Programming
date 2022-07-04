#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 100

void printarr(int arr[], int size)
{

    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 7.1

void no_repetidos(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int k = i + 1; k < size; k++)
        {
            if (arr[i] == arr[k])
            {
                for(int j = k; j < size - 1; j++)
                {
                    arr[k] = arr[k + 1];
                }
                size--;
                k--;
            }
        }
    }
    printarr(arr, size);
}

/*
int main()
{
    int array[SIZE];
    int temp, tam;

    printf("Tamanho do array: ");
    scanf("%d", &tam);
    printf("\n");

    printf("Elementos do array:\n");
    scanf("%d", &temp);

    for (int i = 0; temp != -1; i++)
    {
        array[i] = temp;
        scanf("%d", &temp);
    }

    printf("Array dado:");
    printarr(array, tam);

    printf("Array sem repetidos:");
    no_repetidos(array, tam);
}

*/

// 7.2

/*
int main()
{   
    int arr[26] = {0};
    int ch;
    do
    {
        ch = getchar();
        if (ch >= 'A' && ch <= 'Z')
        {
            ch -= 65;
            arr[ch] += 1;
        }
    } while (ch != EOF);
    printarr(arr, 26);
    
}

*/

// 7.4

void eliminar(char str[], char ch)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            for(int k = i; str[k] != '\0'; k++)
            {
                str[k] = str[k + 1];
            }
            break;
        }
    }
}

// 7.5

void ordenar(char str[])
{
    int alpha[SIZE], ch, sum = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];
        alpha[i] = str[i];
        sum++;
    }
    int temp;
    char tempc;
    for(int i = 0;i < sum ; i++)
    {
        for(int k = i + 1;k < sum; k++)
        {
            if ( alpha[i] >  alpha[k])
            {
                temp =  alpha[k];
                tempc = str[k];

                alpha[k] = alpha[i];
                str[k] = str[i];
                
                alpha[i] = temp;
                str[i] = tempc;
            }
        }
    }
}
int main()
{
    char str[SIZE];
    fgets(str, SIZE, stdin);
    ordenar(str);
    puts(str);

}

// 7.7

/*
Tenho perguiça mas eu leria as duas strings,
guardaria a quantidade de letras de cada uma
num respetivo array e depois comparava os arrays
se ambos tivessem os mesmos valores para cada letra
significa que são anagramas 
*/