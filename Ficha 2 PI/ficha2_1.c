#include <stdio.h>
#define pi (3.1415926)

int main()
{
    int raio;
    printf("Raio: "); scanf("%d", &raio);
    float volume =  4/3*(pi*raio*raio);
    printf("Volume: %0.2f", volume);
}
