#include<stdio.h>
int main()
{double a;
int count,i;
float sum=0,num,avg;
for(i=1;i<=6;i++){
    scanf("%lf",&a);
if(a>0){
   count++;
   sum=sum+a;

   } }
     printf("%d valores positivos\n",count);
     avg=sum/count;
     printf("%.1f\n",avg);


   return 0;
}