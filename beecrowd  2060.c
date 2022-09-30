#include<stdio.h>
int main()
{

    int x,y,i,count=0,read=0,val=0,man=0;
    scanf("%d",&x);
    for(i=0;i<x;i++){
            scanf("%d",&y);
    if(y%2==0){
        count++;
    }
     if(y%3==0){
        read++;
    }
    if(y%4==0){
        val++;
    }
   if(y%5==0){
        man++;
    }

    }
     printf("%d Multiplo(s) de 2\n",count);
    printf("%d Multiplo(s) de 3\n",read);
    printf("%d Multiplo(s) de 4\n",val);
    printf("%d Multiplo(s) de 5\n",man);
return 0;
}