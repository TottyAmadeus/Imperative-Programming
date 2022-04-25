#include <stdio.h>

int main()
{
    float i, c;
    scanf("%f", &i);
    c = 3*i*i*i*i*i + 2*i*i*i*i - 5*i*i*i - i*i + 7*i - 6;
    printf("%0.4f", c);
}