#include<stdio.h>

double serie_log(double x, int n)
{
    double term = x, sum = x;
    for (double i = 2; i <= n; i++){
        term *= (-1)*((double)(i-1)/i)*x;
        sum += term;
    }
    return sum;
}

int main()
{
    double x;
    int n;
    double log;
    printf("X: \n");
    scanf("%d",&x);

    printf("N:  \n");
    scanf("%d",&n);

    log = serie_log(x,n);
    printf("%0.4f", log);

    return 0;
}