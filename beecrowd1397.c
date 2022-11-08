#include<stdio.h>
int main(){
    int r,x,y,count=0,read=0,n;

    func:{
        scanf("%d",&r);
        if(r==0){
            return 0;
        }
        else{

            for(int i=1;i<=r;i++){
                scanf("%d %d",&x,&y);
                if(x>y){
                    count++;

                }
                else if(y>x){
                    read++;
                }
                else{
                    read=read+0;
                    count+=0;
                }

            }

    }
    }
    printf("%d %d\n",count,read);

    count=0;
    read=0;
    goto func;

    
    

    
}