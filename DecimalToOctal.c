#include<stdio.h>

int main()
{
    int a,b;
    printf("Please Enter a Number: ");
    scanf("%d",&a);

    printf("Please Enter a another number: ");
    scanf("%d",&b);

    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d * %d = %d\n",a,b,a*b);

    return 0;
}
