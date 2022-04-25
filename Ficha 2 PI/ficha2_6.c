#include <stdio.h>

int main()
{
    int a;
    int soma = 0;
    int i = 0;
    scanf("%d", &a);
    soma += a;
    while (a != 0)
    {
        scanf("%d", &a);
        soma += a;
        i++;
    }

    float media = (float)soma / i;
    printf("Media: %0.2f", media);
}
