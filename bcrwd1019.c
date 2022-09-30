#include<stdio.h>
int main()
{
    int n,h,m,s,x,y;

    scanf("%d",&n);

    h=n/3600;

    x=(n-h*3600);

    m=(x/60);

    y=(x-m*60);
    s=(y/1);

    printf("%d:%d:%d\n",h,m,s);
    return 0;}