#include <stdio.h>

int potencia(int x, int n)
{
    int pot = x;
    int i;

    if ((n == 0) || (n == 0 && pot != 0))
        return 1;

    for (i = 1; i < n; i++)                                  
    {
        pot *= x;
    }
    return pot;
}

int main()
{
    int a,b,valor_da_potencia;
    scanf("%d", &a);
    scanf("%d", &b);
    valor_da_potencia = potencia(a,b);
    printf("%d" , valor_da_potencia);
}

/*

DECLARAR E INICIALIZAR

int a = 5;              int a;                  Declarar:      int a;  Memória [ ]

printf(a);              printf(a);              Inicializar:   a = 4   Memória [4]

>> 5                    >>  ???

*/