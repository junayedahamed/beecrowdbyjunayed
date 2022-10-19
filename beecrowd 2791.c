#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a==1&&b==0&&c==0&&d==0){
        printf("1\n");
    }

     if(a==0&&b==1&&c==0&&d==0){
        printf("2\n");
    }

     if(a==0&&b==0&&c==1&&d==0){
        printf("3\n");
    }
    if (a==0&&b==0&&c==0&&d==1) {
        printf("4\n");
    }

    return 0;
}