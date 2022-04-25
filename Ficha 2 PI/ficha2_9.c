#include <stdio.h>

int prox_bissexto(int n)
{
    int i, ano;
    int x = n * 3;
    i = x % 4;
    ano = i + n;
    if (ano % 100 == 0 && ano % 400 != 0)
        return ano + 4;
    else
        return ano;
}

int main()
{
    int a, bissexto;
    scanf("%d", &a);

    bissexto = prox_bissexto(a);
    printf("%d", bissexto);
}

/*
#include <stdio.h>

int bissexto(int n){
    if (n%4 == 0 && n%100 == 0 && n%400 != 0){
        return 0;
    }
    else if ((n%4 == 0) || (n %4 == 0 && n%100 == 0 && n%400 == 0)){
        return 1;
    }
    else{
        return 0;
    }
}

int prox_bissexto(int n){
    if (bissexto(n)){
        return n;
    }
    else{
        while (bissexto(n) != 1){
            n++;
            if (bissexto(n)){
                return n;
            }
        }
    }
    return 0;
}

*/