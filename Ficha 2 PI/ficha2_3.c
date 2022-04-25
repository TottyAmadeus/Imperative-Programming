#include <stdio.h>

int main()
{
    int a, b, c, med;
    printf("Primeiro Valor: ");
    scanf("%d", &a);
    printf("Segundo Valor: ");
    scanf("%d", &b);
    printf("Terceiro Valor: ");
    scanf("%d", &c);

    if ((a <= b) && (b <= c)) med = b;  // a b c
    if ((a <= c) && (c <= b)) med = c;  // a c b
    if ((b <= a) && (a <= c)) med = a;  // b a c
    if ((b <= c) && (c <= a)) med = c;  // b c a
    if ((c <= a) && (a <= b)) med = a;  // c a b
    else med = b;                      // c b a

    med = mediana(a, b, c);
    printf("Mediana: %d" , med);
}
