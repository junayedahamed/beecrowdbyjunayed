#include<stdio.h>
int main()
{

    int x,y;
    float sum;
    scanf("%d%d",&x,&y);
    if(x==1){
            sum=4.00*y;
        printf("Total: R$ %.2f\n",sum);
    }
    else if(x==2){
            sum=4.50*y;
        printf("Total: R$ %.2f\n",sum);
    }
    else if(x==3){
            sum=5.00*y;
        printf("Total: R$ %.2f\n",sum);
    }
    else if(x==4){
            sum=2.00*y;
        printf("Total: R$ %.2f\n",sum);
    }
    else{
        sum=1.50*y;
        printf("Total: R$ %.2f\n",sum);
    }
    return 0;

}