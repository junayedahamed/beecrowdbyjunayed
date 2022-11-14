
#include<stdio.h>
int main(){
    int t,i;

    scanf("%d",&t);
    int a[t];
       
   for ( i = 0; i < t; i++)
   {
    scanf("%d",&a[i]);
   }
    int small=a[0],cought=1;

   for ( i = 0; i < t; i++)
   {

        if(small>a[i]){

                small=a[i];
               cought=i+1;
        }
        

   }
   printf("%d\n",cought);
   
   
   
    
    return 0;
}
