#include<stdio.h>
int main(){
    int n,N[1000],i;
    scanf("%d",&n);

    for(i=0;i<1000;) {
         
           
    
        for(int j=0;j<n;j++){

        printf("N[%d] = %d\n",i,j);
        
        i++;
        if(i>999){
            break;
        }

      }

    }


    return 0;
}