#include<stdio.h>
int main()
{
   long int i,a,b,sum=0;
   scanf("%ld %ld",&a,&b);
   sum=((a+b)*(b-a+1)/2);
   
       printf("%ld\n",sum);

    return 0;
}