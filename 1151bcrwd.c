#include<stdio.h>
int main(){
int x=0,y=1,i,last,sum;
scanf("%d",&last);
for(i=1;i<last;i++){
    printf("%d ",x);
    sum=x+y;
    x=y;
    y=sum;

}
printf("%d\n",x);
return 0;



}