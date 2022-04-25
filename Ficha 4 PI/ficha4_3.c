#include <stdio.h>
#include <string.h>

int main()
{

    char str[100];
    int soma = 0, i,c;
    c = strlen(str);

    scanf("%s",str);
    for (i = 0; i <= c; i++)
    {
        if (str[i] == ' ')
        {
            printf("asfsgrtr");
            soma++;
        }
    }
    printf("%d", soma);
}