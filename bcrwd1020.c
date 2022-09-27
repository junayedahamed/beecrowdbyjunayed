#include<stdio.h>
int main()
{
    int x,y,m,d,r,t;

    scanf("%d",&x);

    y=x/365;

    r=(x-y*365);

    m=r/30;
    t=(r-m*30);
    d=t;
    printf("%d ano(s)\n",y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);

    return 0;
}