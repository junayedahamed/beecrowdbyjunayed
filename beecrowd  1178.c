#include<stdio.h>
int main(){

    double n,N[100];
    int i;
    scanf("%lf",&n);

    for(i=0;i<100; i++) {
         
           printf("N[%d] = %.4lf\n",i,n);
           n=n/2;
    
        

    }


    return 0;
}
