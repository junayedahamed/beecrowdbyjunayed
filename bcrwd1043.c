#include<stdio.h>
int main()
{
    float a,b,c,p,A;
    scanf("%f%f%f",&a,&b,&c);
    if((a+b)>c&&(a+c)>b&&(b+c)>a){
            p=a+b+c;
        printf("Perimetro = %.1f\n",p);
    }
    else{
        A=(a+b)/2*c;
        printf("Area = %.1f\n",A);
    }

    return 0;
}