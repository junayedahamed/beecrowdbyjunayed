#include<stdio.h>
int main()
{
    int X;

    float Y,d_l;

    scanf("%d",&X);
    scanf("%f",&Y);

    d_l=X/Y;

    printf("%.3f km/l\n",d_l);

    return 0;
}