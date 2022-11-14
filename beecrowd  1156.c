#include<stdio.h>
int main(){
    double i,sum=0,n=0,x=1;

    for(i=1;i<=39;i=i+2){
        sum=sum+(i)/x;
        x=x*2;
        
    }

    printf("%.2lf\n",sum);

    return 0;
}