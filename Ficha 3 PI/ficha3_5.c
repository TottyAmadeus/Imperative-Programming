#include <stdio.h>

int soma_divisores(int n)
{
    int i;
    int soma = 0;
    for(i=1; i < n; i++)
    {
        if (n % i == 0)
        {
            soma += i;
        }
    }
    return soma;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", soma_divisores(n));
}