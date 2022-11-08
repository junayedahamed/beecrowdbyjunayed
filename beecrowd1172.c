#include<stdio.h>
int main(){
   long int X[10],i,j;

    for(i=0;i<10;i++){

     scanf("%ld",&X[i]);
    }
    for(i=0;i<10;i++){

        if(X[i]==0 || X[i]<0)

        printf("X[%ld] = 1\n",i);

    else{
            printf("X[%ld] = %d\n",i,X[i]);
        }
    }



    return 0;
}