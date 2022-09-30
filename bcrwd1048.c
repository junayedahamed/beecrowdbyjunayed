#include<stdio.h>
int main()
{
    double s,r,ns;
    scanf("%lf",&s);
    if (s>=0&&s<=400){
        printf("Novo salario: %.2lf\n",ns=s+s*0.15);
        printf("Reajuste ganho: %.2lf\n",r=ns-s);
        printf("Em percentual: 15 %%\n");
    }
    else if(s>400&&s<=800){

        printf("Novo salario: %.2lf\n",ns=s+s*0.12);
        printf("Reajuste ganho: %.2lf\n",r=ns-s);
        printf("Em percentual: 12 %%\n");
    }
    else if(s>800&&s<=1200){

        printf("Novo salario: %.2lf\n",ns=s+s*0.10);
        printf("Reajuste ganho: %.2lf\n",r=ns-s);
        printf("Em percentual: 10 %%\n");
    }
    else if(s>1200&&s<=2000){

        printf("Novo salario: %.2lf\n",ns=s+s*0.07);
        printf("Reajuste ganho: %.2lf\n",r=ns-s);
        printf("Em percentual: 7 %%\n");
    }
    else {

        printf("Novo salario: %.2lf\n",ns=s+s*0.04);
        printf("Reajuste ganho: %.2lf\n",r=ns-s);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}