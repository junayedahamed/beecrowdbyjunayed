#include<stdio.h>
int main()
{

    double r,volume;

    scanf("%lf",&r);

    volume=((4.0/3)*3.14159*(r*r*r));
    printf("VOLUME = %.3lf\n",volume);

    return 0;


}