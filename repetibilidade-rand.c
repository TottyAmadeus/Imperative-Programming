#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    srand(1);
    for(int i = 0; i<5; i++)
    {
        printf("%d\n", rand());
    }

    srand(1);
    for(int i = 0; i<5; i++)
    {
        printf("%d\n", rand());
    }
}

/*
First for output:

41
18467
6334
26500
19169

Second for output:

41
18467
6334
26500
19169

*/
