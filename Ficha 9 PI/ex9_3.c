#include <stdio.h>
#include <math.h>


typedef struct ponto{
double x, y;
} Ponto;

double distancia(Ponto a, Ponto b)
{
    double resultado = sqrt(((b.x - a.x)*(b.x - a.x)) - ((b.y - a.y)*(b.y - a.y)));
    return resultado;
}

int mesmo_ponto(Ponto a, Ponto b)
{
    if (distancia(a, b) < 0.000001) return 1; else return 0;
}

int ler(Ponto lista[10])
{
    for(int i = 0; i < 10; i++)
    {
    int x,y;
    scanf("%d %d", &x, &y);
    Ponto p = {x, y};
    lista[i] = p;
    }
    

}

Ponto comparar_pontos(Ponto lista[10])
{
    int maior_i = 0, maior_j = 0;
    double dist, maior_dist = 0;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10 - i; j++)
        {
            dist = distancia(lista[i], lista[j]);
            if (dist < maior_dist)
            {
                maior_dist = dist;
                maior_i = i;
                maior_j = j;
            }
        }
    }
    return(lista[maior_i], lista[maior_j]);
}

int main(){
    Ponto lista[10];
    ler(lista);
    Ponto p1, p2;
    p1, p2 = comparar_pontos(lista);
    printf("(%d, %d) e (%d, %d)", p1.x, p1.y, p2.x, p2.y);
}