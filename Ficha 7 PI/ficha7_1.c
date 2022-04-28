#include <stdio.h>

int main()
{
    int nums[100];
    int i = 0, pos = 0, add = 1;
    scanf("%d", &i);
    while (i != -1)
    {
        for(int j = 0; j <= pos; j++)
        {
            if (i == nums[j]) add = 0;
        }
        if (add == 1)
        {
            nums[pos] = i;
        }
        add = 1;
        scanf("%d", &i);
        pos++;
    }
    for (int k = 0; k < pos; k++)
    {
        printf("%d ", nums[pos]);
    }
}