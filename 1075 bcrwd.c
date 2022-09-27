#include<stdio.h>
int main(){
long int n,i;
scanf("%d",&n);
for (i=1;i<=10000;i++){
  if( i%n==2){
    printf("%ld\n",i);}
}
return 0;
}