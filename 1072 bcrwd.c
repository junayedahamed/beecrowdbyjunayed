#include<stdio.h>
int main(){
int n,i,x,coun=0,read=0;
scanf("%d",&n);
for(i=1;i<=n;i++){
        scanf("%d",&x);
        if(x>=10&&x<=20){
    coun++;

}

else {
         read++;
    }

}
printf("%d in\n%d out\n",coun,read);
return 0;
}