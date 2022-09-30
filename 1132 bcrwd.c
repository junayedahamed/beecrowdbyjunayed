#include<stdio.h>
int main()
{

   int x,y,sum=0,min,max;

    scanf("%d %d",&x,&y);
    if(x>y){
        min=y;
        max=x;
    }
    else {
        min=x;
        max=y;
    }

    for(short int i=min;i<=max;i++){
            if(i%13!=0){
              sum=sum+i;
            }
    }
    printf("%d\n",sum);
    return 0;
}