#include<stdio.h>
int main(){
float x,am,sum=0,sum2=0,sum3=0,total=0,x1=0,x2=0;
char ch;
double p1=0,p2=0,p3=0;

scanf("%f",&x);
for(int i=1;i<=x;i++){
    scanf("%f %c",&am,&ch);
    total+=am;

    switch (ch)
    {
    case 'C':
    sum=sum+am;

    case 'R':
    sum2=sum2+am;
    x1=sum2-sum;

    case 'S':
    sum3=sum3+am;
    x2=sum3-sum2;

    }




    }
     printf("Total: %.0f cobaias\n",total);

     printf("Total de coelhos: %.0f\n",sum);

     printf("Total de ratos: %.0f\n",x1);
     printf("Total de sapos: %.0f\n",x2);
     p1=((sum*100)/total);

     printf("Percentual de coelhos: %.2lf %%\n",p1);

     p2=(x1*100)/total;


     printf("Percentual de ratos: %.2lf %%\n",p2);

     p3=(x2*100)/total;



     printf("Percentual de sapos: %.2lf %%\n",p3);







       return 0;
}
