#include <stdio.h>
#include <stdlib.h>
#include <math.h>





//9.3

typedef struct
{
    double x,y;
} Ponto;




// 9.3.5

typedef struct
{
    Ponto a, b;
} Rect;

double rect_area(Rect r)
{
    double altura = sqrt(((r.b.y - r.a.y)*(r.b.y - r.a.y)));
    double largura = sqrt(((r.b.x - r.a.x)*(r.b.x - r.a.x)));
    return (altura * largura);
}




// 9.3.1

double distancia(Ponto a, Ponto b)
{
    return(sqrt(((b.x - a.x)*(b.x - a.x)) + ((b.y - a.y)*(b.y - a.y))));
}





// 9.3.2

int mesmo_ponto(Ponto a, Ponto b)
{
    if(distancia(a,b) > 0.000001) return 0; else 1; 
}





// 9.3.3

void dist10pontos()
{
    Ponto a, b, novo, arr[10];
    double dist = 0, maxdist = 0;

    for(int i = 0; i < 10; i++)
    {
        scanf("%lf %lf", &novo.x, &novo.y);
        arr[i] = novo;
    }

    for(int i = 0; i < 10; i++)
    {
        for(int j = i; j < 9; j++)
        {
            dist = distancia(arr[i], arr[j]);
            if(dist > maxdist)
            {
                a = arr[i];
                b = arr[j];
                maxdist = dist;
            }
        }
    }
    printf("Ponto 1: (%lf, %lf) Ponto 2: (%lf,%lf) Dist: %lf \n", a.x, a.y, b.x, b.y, maxdist);

}



int main()
{
    Ponto a, b;
    double area;
    scanf("%lf %lf", &a.x, &a.y);
    scanf("%lf %lf", &b.x, &b.y);
    Rect r = {a, b};
    area = rect_area(r);
    printf("%lf", area);
}