#include<stdio.h>
int main()
{

    int a,count=0;
    scanf("%d",&a);
    while(count<6){
        if(a%2!=0){
            printf("%d\n",a);
        count++;}

 a++;
    }
return 0;
}