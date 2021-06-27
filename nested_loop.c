#include<stdio.h>

int main()
{
    int i,j,m;
    m = 0;
    for(i < 1; i<=20; i++)
    {
        for(j<1; j<=10; j++)
        {
            m = m + i;
            printf("%d * %d = %d\n",i, j, m);
        }

    }

    return 0;
}
