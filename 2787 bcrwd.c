#include<stdio.h>
int main()
{
int a,b;

scanf("%d%d",&a,&b);
if(a%2==0&&b%2==0){
        printf("1\n");

}
else if(a%2==0 && b%2!=0||a%2!=0&&b%2==0){
    printf("0\n");
}
else{
    printf("1\n");
}
return 0;
}