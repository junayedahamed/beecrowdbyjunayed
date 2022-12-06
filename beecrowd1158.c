#include<stdio.h>
int main(){
    int test,x,y,sum=0;
    scanf("%d",&test);

    for(int i=1;i<=test;i++){
        
        scanf("%d %d",&x,&y);

        if(x%2==0){
                for(int i=1;i<=y;i++){

                    if(i==1){

                         x=x+1;
                    }
                       
                        sum=sum+x;

                        x=x+2;

                }
                printf("%d\n",sum);
                sum=0;

        }
        else 
        {
           for(int i=1;i<=y;i++){

                        sum=sum+x;

                        x=x+2;

                }
                printf("%d\n",sum);
                sum=0;
        }
        
        
    }



    return 0;
}