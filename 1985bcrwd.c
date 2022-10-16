#include<stdio.h>
int main(){
double x,pc,q,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
double val=0;
scanf("%lf",&x);

for(int i=1;i<=x;i++){

    scanf("%lf %lf",&pc,&q);
    if(pc==1001){

        sum1=q*1.50;

    }
    if(pc==1002){
        sum2=q*2.50;
    }

    if(pc==1003){
        sum3=q*3.50;
    }
    if(pc==1004){
        sum4=q*4.50;
    }
    if(pc==1005){
        sum5=q*5.50;
    }
}
val=sum1+sum2+sum3+sum4+sum5;

printf("%.2lf\n",val);

    return 0;
}