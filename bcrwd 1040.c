#include<stdio.h>
int main()
{

    float n1,n2,n3,n4,avg,a,sum;
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
    scanf("%d",&sum);


    avg=(n1*2+n2*3+n3*4+n4*1)/4;
    printf("Media: %.1f\n",avg);


    if(avg>7.0){
        printf("Aluno aprovado.\n");

    }
    else if(avg>5||avg<6.9){
        printf("Aluno em exame.\n");
        scanf("%f",&a);


    }
    else{
        printf("Aluno reprovado.\n");


    }


    sum=(avg+a)/2;
    if(sum>=5.0){
        printf("Aluno aprovado.\n");
    }
    else{
        printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1f\n",sum);

    return 0;
}