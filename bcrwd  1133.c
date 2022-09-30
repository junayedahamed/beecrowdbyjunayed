 #include<stdio.h>
int main()
{
    int x,y,i,min,max,sum=0;
    scanf("%d %d",&x,&y);
    if(x>y){
        min=y;
        max=x;
    }
    else{
        min=x;
        max=y;
    }
    for(i=min+1;i<max;i++){

        if(i%5==2||i%5==3){
        printf("%d\n",i);}
    }
    return 0;
}