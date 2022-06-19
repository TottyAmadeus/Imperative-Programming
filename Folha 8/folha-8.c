#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// 8.3

void decompor(int total_seg, int *horas, int *mins, int *segs)
{
    *horas = total_seg / 3600;
    total_seg  %= 3600;
    *mins = total_seg / 60;
    total_seg %= 60;
    *segs = total_seg;
}

/* 
int main()
{
    int segundos, horas, mins, segs;
    scanf("%d", &segundos);
    decompor(segundos, &horas, &mins, &segs);
    printf("%d horas, %d minutos e %d segundos", horas, mins, segs);
} 
*/

// 8.5

void reduzir(int *pnum,int *pdenom)
{
    int num = *pnum;
    int denom = *pdenom;

    while(num != denom)                 // GCD of the fraction
    {
        if (num > denom) num -= denom;
        else denom -= num;
    }

    *pnum /= num;
    *pdenom /= num;
}

int main()
{
    int num, denom;

    printf("Numerador: \n");
    scanf("%d", &num);
    printf("Denominador: \n");
    scanf("%d", &denom);
    reduzir(&num, &denom);
    printf("Fracao Reduzida: %d / %d", num, denom);
} 

// 8.6

// void store_zeros(int vec[], int n)
// {
//     int i;
//     for(i=0; i<n; i++)
//     {
//         vec[i]=0;
//     }
    
// }

// Fica

void store_zeros(int *vec, int n)
{
    while (n > 0)
    {
        *vec = 0;
        vec++;
        n--;
    }
    
}