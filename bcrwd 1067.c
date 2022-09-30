#include<stdio.h>
int main()
{

    long int i,a;
    scanf("%ld",&a);

    for(i=1;i<=a;i=i+2){
        printf("%ld\n",i);
    }
    return 0;
}