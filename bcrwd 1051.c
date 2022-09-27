#include<stdio.h>
int main()
{
    double a,p,q,s,x,y,z,r,n,d;
    scanf("%lf",&a);
    if(a>=0&&a<=2000){
        printf("Isento\n");
    }
    else if(a>2000&&a<=3000){
        s=a-2000;
        p=s-1000;
        q=s-p;
        x=q*.08;
        y=p*.18;
        z=x+y;
        printf("R$ %.2lf\n",z);
    }
 else if(a>3000&&a<=4500){
        s=a-2000;
        p=s-1000;
        q=s-p;
        x=q*.08;
        y=p*.18;
        z=x+y;
        printf("R$ %.2lf\n",z);
    }
     else {
        s=a-2000;
        p=s-1000;
        q=s-p;
       r=p-1500;
       d=p-r;
        x=q*.08;
        y=d*.18;
        n=r*0.28;
        z=x+y+n;
        printf("R$ %.2lf\n",z);
    }
}