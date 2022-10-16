#include<stdio.h>
int main(){
    double x,y,sum=0,count=0,sum1=0,sum2=0;
    while (1){
        scanf("%lf %lf",&x,&y);

        if(x<0){
             printf("nota invalida\n");
           
        }
        if(x>10){
             printf("nota invalida\n");

        }

        if(y<0||y>10){
             printf("nota invalida\n");
             continue;
        }






         if(x>=0&&x<=10&&y>=0&&y<=10) {
            sum=x+y;
            sum1=sum/2;
            printf("%.2lf\n",sum1);
            break;

        }
        
        







    }




    return 0;
}