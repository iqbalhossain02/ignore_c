#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d\n",&a,&b,&c);

    float avarage = (a+b+c)/3.0;

    printf("Value of a: %d\n",a);
    printf("Value of b: %d\n",b);
    printf("Value of c: %d\n",c);
    printf("Average: %.2f ",avarage);

    return 0;


}
