#include <stdio.h>

int main()
{
    double a;
    double b;
    scanf("%lf %lf", &a, &b);
    printf("%.11f", a / b);
    
    return 0;
}