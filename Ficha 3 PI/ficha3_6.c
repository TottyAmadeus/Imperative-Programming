#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;
    printf("Numerador: ");
    scanf("%d", &n1);
    printf("Denominador: ");
    scanf("%d", &n2);
    
    for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    n1 /= gcd;
    n2 /= gcd;
    if (n2 == 1) printf("%d", n1); else printf("%d / %d",n1, n2);
    return 0;
}