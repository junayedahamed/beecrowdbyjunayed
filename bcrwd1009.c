#include<stdio.h>
int main()
{
    char nam[10];
    double sal,sel_p,total;

    gets(nam);

    scanf("%lf %lf",&sal,&sel_p);

    total=sal+(sel_p*0.15);

    printf("TOTAL = R$ %.2lf\n",total);
    return 0;

}