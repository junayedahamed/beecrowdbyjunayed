#include<stdio.h>
int main(){
   long long int i,s,x,y=0,sum=0,fac=1,loop=1;
   while (scanf("%lld %lld",&x,&y) !=EOF)
  {
   
    for(i=1;i<=x;i++){
        fac*=i;

        
    }
    
    for(s=1;s<=y;s++){
        loop*=s;
    }



   sum=fac+loop;
    printf("%lld\n",sum);

    sum=0;
    loop=1;
    fac=1;
    
   
}


   
  return 0;
  }