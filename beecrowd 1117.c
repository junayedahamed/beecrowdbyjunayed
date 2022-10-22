#include<stdio.h>
int main(){
   float x,sum=0,count=0;
    while (1)
    {
        scanf("%f",&x);

        if(x<0||x>10){
            printf("nota invalida\n");

        }
        else{
            sum=sum+x;
            count++;

        }
        if(count==2){
            sum/=count;
            break;
        }

    }
printf("media = %.2f\n",sum);
    
    
return 0;
}