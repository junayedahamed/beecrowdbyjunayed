#include<stdio.h>
int main(){
    int n,x=1,y=2,z=3;

    scanf("%d",&n);

    for (int i=1;i<=n;i++){
        
        printf("%d %d %d PUM\n",x,y,z);

        x=x+4;
        y=y+4;
        z=z+4;


    }
    return 0;
}