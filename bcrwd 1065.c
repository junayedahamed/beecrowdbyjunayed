#include<stdio.h>
int main()
{

    int x,i,count=0;

   for(i=1;i<=5;i++){
        scanf("%d",&x);
    if(x%2==0){
        count++;

}

   }
   printf("%d valores pares\n",count);
return 0;
}