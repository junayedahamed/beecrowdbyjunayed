#include<stdio.h>
int main()
{
    int x,y,z,p,q,r;
   scanf("%d%d%d%d%d%d",&x,&y,&z,&p,&q,&r);
   if(x<y<z<p<q<r){
    printf("C\n");
   }
   else if(x>y>z>p>q>r){
    printf("D\n");
   }
   else{
    printf("N\n");
   }
   return 0;
}