#include<stdio.h>
int main()
{

    int m,n,min,max,i,sum=0;

    while(1){
        scanf("%d %d",&m,&n);
        if(m>n){
        min=n;
        max=m;
    }
    else {
        min=m;
        max=n;
    }
        if(min<=0||max<=0){
            break;
        }
        else {
            for(i=min;i<=max;i++){
                printf("%d ",i);
                sum=sum+i;
            }
            printf("Sum=%d\n",sum);
            sum=0;
        }
    }
    return 0;
}