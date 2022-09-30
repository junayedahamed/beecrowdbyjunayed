#include<stdio.h>
int main()
{

    int i,a,count=0,val=0,sum=0,sun=0;
    for(i=1;i<=5;i++){
        scanf("%d",&a);
        if(a%2==0){
            count++;}
          if(a%2!=0){
            val++;
          }
          if(a>0){
            sum++;
          }
          if(a<0){
            sun++;
          }

}

 printf("%d valor(es) par(es)\n",count);
 printf("%d valor(es) impar(es)\n",val);
 printf("%d valor(es) positivo(s)\n",sum);
 printf("%d valor(es) negativo(s)\n",sun);

 return 0;
}