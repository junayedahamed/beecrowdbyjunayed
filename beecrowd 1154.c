#include<stdio.h>

int main(){
  float  x ,count=0,sum=0;
    float avg;
    
    while (1)
    {
      scanf("%f",&x);
      if(x<0){
        break;
      }

      else if(x>=0){
        sum+=x;
        count++;
      }
   



    }
    
  avg=sum/count;
  
printf("%.2f\n",avg);

return 0;}