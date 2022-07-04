#include <stdio.h>

typedef struct{
    float x, y;
} ponto;

int main(){
    ponto Centroid = {0, 0};
    float x, y;
    for (int i = 0; i < 10; i++){
        scanf("%f %f", &x, &y);
        Centroid.x += x;
        Centroid.y += y;
    }
    Centroid.x /= 10;
    Centroid.y /= 10;
    printf("(%.2f,%.2f)", Centroid.x, Centroid.y);
    return 0;
}