#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,val,mul=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        val=pow(i,2);
        mul=i*val;
        printf("%d %d %d\n",i,val,(i*val));
    }
  return 0;

}