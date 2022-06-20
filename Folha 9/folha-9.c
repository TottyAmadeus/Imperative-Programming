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

/*

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

*/

typedef struct
{
    int dia, mes, ano;
}data;


int data_sort(data data1, data data2)
{
    if (data1.ano < data2.ano) return 1;
    if ((data1.ano == data2.ano) && (data1.mes < data2.mes)) return 1;
    if ((data1.ano == data2.ano) && (data1.mes == data2.mes) && (data1.dia < data2.dia)) return 1;
    return 0;
}

void ordena_datas(data datavec[], int size)
{
    data temp;
    for(int i = 0; i < size + 1; i++)
    {
        for(int k = i; k < size + 1; k++)
        {
            if(data_sort(datavec[i], datavec[k]))
            {
                temp = datavec[i];
                datavec[i] = datavec[k];
                datavec[k] = temp;
            }
        }
    }
}

void menor_data(data datavec[], int size)
{
    data menor = datavec[0];
    for(int i = 0; i < size + 1; i++)
    {
        if(data_sort(datavec[i], menor)) menor = datavec[i];
    }
    printf("%d / %d / %d", menor.dia , menor.mes, menor.ano);
}

int main()
{
    data datas[10] = {0};
    data input;
    input.dia = 0;
    int size = 0;
    int i = 0;
    while (input.dia != -1)
    {
        scanf("%d %d %d", &input.dia, &input.mes, &input.ano);
        if(input.dia != -1)
        {
            datas[i] = input;
            // printf("%d / %d / %d \n", datas[i].dia , datas[i].mes, datas[i].ano);
            size = i;
            // printf("%d \n", size);
            i++;
        }
    }
    
    
    ordena_datas(datas, size);
    menor_data(datas, size);
}