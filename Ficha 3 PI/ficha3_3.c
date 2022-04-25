#include <stdio.h>
 


int main()
{
    int i = 10;
    int j = 5;
    printf("%d", !i < j);
}


/*
Prints 1

int main()
{
    int i = 2;
    int j = 1;
    printf("%d", !!i + !j);
                   1 + 0
}

Prints 1



int main()
{
    int i = 5;
    int j = 0;
    int k = -5;
    printf("%d", i && j || k);
                 5 && 0 || -5
                 0      || -5
}

Prints 1

int main()
{
    i = 1; 
    j = 2; 
    k = 3;
    printf("%d", i < j || k);
                 1 < 2 || 3
                   0   || 1
}

Prints 1

int main()
{
i = 3; 
j = 4; 
k = 5;
printf("%d",i < j || ++j < k);
            3 < 4 || 5 < 5
              1   ||   0

printf("%d %d %d", i, j, k);

Prints 1
       3 5 5
}


*/