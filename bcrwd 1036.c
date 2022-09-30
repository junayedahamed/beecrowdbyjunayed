#include<math.h>
int main()
{
    double a,b,c,d;
    scanf("%lf%lf%lf",&a,&b,&c);

    if((b*b-4*a*c)<=0||a==0){
             printf("Impossivel calcular\n");

    }
    else {
         d=sqrt(b*b-4*a*c);



        printf("R1=%.5lf\nR2=%.5lf\n",((-b+d)/(2*a)),((-b-d)/(2*a)));
}
return 0;
    }