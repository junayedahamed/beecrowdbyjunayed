#include<stdio.h>
#include<math.h>
 int main(){

  unsigned long long int n,x,sum=0,i,sum2=0,sum3=0;

    scanf("%lld",&n);

    for(i=1;i<=n;i++){

        scanf("%lld",&x);


        sum=(long long)(pow(2,x)/12000);



     printf("%lld kg\n",sum);

    }
   

   


return 0;
}