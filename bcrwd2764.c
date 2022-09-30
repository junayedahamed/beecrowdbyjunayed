#include<stdio.h>
int main()
{
    int dd,mm,yy;
    scanf("%d/%d/%d",&dd,&mm,&yy);
    if (mm<10 && dd<10&&yy<10 ){
        printf("0%d/0%d/0%d",mm,dd,yy);
        printf("0%d0%d0%d",yy,mm,dd);
        printf("0%d0%d0%d",dd,mm,yy);
    }
    else{

    printf("%d/%d/%d\n",mm,dd,yy);
    printf("%d/%d/%d\n",yy,mm,dd);
     printf("%d-%d-%d\n",dd,mm,yy);}
     return 0;
}
