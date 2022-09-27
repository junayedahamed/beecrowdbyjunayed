#include<stdio.h>
int main()
{
    int i, count=0;
    double a;

    for(i=1;i<=6;i++){
    scanf("%lf",&a);


     if(a>0){
        count++;}
     }
     printf("%d valores positivos\n",count);
     return 0;
}