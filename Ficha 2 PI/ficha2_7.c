#include <stdio.h>

int main()
{
    int n, i;
    printf("Numero inteiro: "); scanf("%d", &n);
    {
        printf("%d: ", n);
        i = 2;
        while(n != 1)
        {
            if (n % i == 0)
            {
                printf("%d ", i);
                n = n / i;
            }
            else i++;
        }
    }
    return 0;
}