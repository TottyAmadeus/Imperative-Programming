#include <ctype.h>
#include <string.h>

int forte(char str[])
{
    int s = strlen(str);
    // Vê se a password tem pelo menos 6 caracteres
    int soma = 0, u = 1, l = 0, a = 0;
    for (int i = 0; i < s; i++)
    {
        soma++;
        if (isalpha(str[i]))
        {
            if (isupper(str[i]))
                u = 1;
            if (islower(str[i]))
                l = 1;
        }
        if (isdigit(str[i]))
            a = 1;
    }
    if (soma >= 6 && u == 1 && l == 1 && a == 1)
        return 1;
    else
        return 0;
}