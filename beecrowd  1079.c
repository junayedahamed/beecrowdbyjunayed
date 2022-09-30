#include<stdio.h>

int main()
{
    int i,n;
    float x,y,z,avg=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%f %f %f",&x,&y,&z);
        sum=(x*2+y*3+z*5);
        avg=sum/(2+3+5);
        printf("%.1f\n",avg);
    }
    return 0;
}