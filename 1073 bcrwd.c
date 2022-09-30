#include<stdio.h>
#include<math.h>
int main()
{

    int n,i,val;
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2){
val=pow(i,2);
printf("%d^2 = %d\n",i,val);

}
return 0;

}