#include <stdio.h>

int prox_bissexto(int n)
{
    if (n % 100 == 0 && n % 400 != 0)
        return 0;
    else if (n % 4 == 0){
        return 1;
    }
        return 0;
}

int main()
{
    int a, ano;
    scanf("%d", &a);

    ano = prox_bissexto(a);
    printf("%d", ano);
}
