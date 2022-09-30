#include<stdio.h>
int main()
{

    int x,y,i,sum=0,min,max;
    scanf("%d%d",&x,&y);
    if(x>y){
        min=y;
        max=x;
    }
    else {
        min=x;
        max=y;
    }
    for(i=(min+1);i<max;i++){
            if(i%2!=0){
                sum=sum+i;
            }

    }
    printf("%d\n",sum);
    return 0;
}