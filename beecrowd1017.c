#include<stdio.h>
int main()
{

    int t,s;

    float td, tf; //t== time,s==speed/h,td==total distance,tf==total fuel//

   scanf("%d %d",&t,&s);

   td=s*t;

   tf=td/12;

   printf("%.3f\n",tf);

   return 0;
}