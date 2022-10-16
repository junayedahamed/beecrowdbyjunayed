#include<stdio.h>
int main(){
    int n=0,x=0,y=0,sum=0,min=0,max=0,s=0;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        scanf("%d %d",&x,&y);
        if(x>y){
            max=x;
            min=y;

        }
        else{
            max=y;
            min=x;
        }

       // printf("%d %d\n",max,min);


        for( s=(min+1);s<max;s++){
            if(s%2!=0){
                sum=sum+s;

               
            }
            
            
        }
         printf("%d\n",sum);
         sum=0;

    }
    

    return 0;
}