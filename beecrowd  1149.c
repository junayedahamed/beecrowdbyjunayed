#include<stdio.h>
int  main(){

    int a,n,sum=0;

    scanf("%d",&a);

    fin:{
        scanf("%d",&n);
    
    }
        if(n<=0){

        goto fin;
    }
    
    
    for(int i=1;i<=n;i++){
        sum=sum+a;
        a++;
    }
    printf("%d\n",sum);
    return 0;
}