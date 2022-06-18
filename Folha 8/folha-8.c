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

int main()
{
    int segundos, horas, mins, segs;
    scanf("%d", &segundos);
    decompor(segundos, &horas, &mins, &segs);
    printf("%d horas, %d minutos e %d segundos", horas, mins, segs);
}