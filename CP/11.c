#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 5;
    int i, j,num;
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }

    return 0;
}