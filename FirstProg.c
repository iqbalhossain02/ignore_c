#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,x1,x2,d;

    printf("Enter 3 value of a,b & c\n");
    scanf("%lf %lf %lf",&a,&b,&c);

    d = sqrt(b*b - 4*a*c);
    x1 = (-b + d)/(2*a);
    x2 = (-b -d)/(2*a);

    printf("X1 = %.2lf, X2 = %.2lf",x1, x2);






}
