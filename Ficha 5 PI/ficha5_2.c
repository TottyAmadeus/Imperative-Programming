#include <ctype.h>
#include <stdio.h>
#include <string.h>
void capitalizar(char str[])
{
    int s;
    s= strlen(str);
    for(int i = 0; i < s; i++)
    {
        if(isalpha(str[i]) && islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
    }
    printf("%s", str);
}
 
int main()
{
    char str[7] = {'H', 'e', 'l', 'l', 'o', '4', '\0'};
    capitalizar(str);
}