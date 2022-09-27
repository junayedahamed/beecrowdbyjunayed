#include<stdio.h>
int main()
{
    int a,b,c,gv;
    scanf("%d%d%d",&a,&b,&c);
    gv=(a+b+abs(a-b))/2;
    gv=(gv+c+abs(gv-c))/2;
    printf("%d eh o maior\n",gv);

    return 0;

}