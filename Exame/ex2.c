#include <stdio.h>
#include <ctype.h>

int main(){
    FILE *f;
    f = fopen("texto.txt", "r");
    int c = getchar();
    int count = 0;
    int ch;
    while ((ch = fgetc(f)) != EOF){
        if (tolower(ch) == c) count++;
        if (ch == '\n'){
            printf("%d\n", count);
            count = 0;
        }
    }
    fclose(f);
    printf("%d\n", count);
    return 0;
}