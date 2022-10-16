#include<stdio.h>
int main(){
    double n1,n2,n3,n4,x,sum=0,avg=0;


        scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
     
        avg=(n1*2+n2*3+n3*4+n4*1)/10;

        printf("Media: %.1lf\n",avg);
        if(avg>=7.0){

            printf("Aluno aprovado.\n");
        }

        if(avg<5.0){

            printf("Aluno reprovado.\n");
        }
        if(avg>=5.0&&avg<=6.9){

            printf("Aluno em exame.\n");
          
            scanf("%lf",&x);

            sum=(avg+x)/2;
            if(sum>=5.0){
                  printf("Nota do exame: %.1lf\n",x);
                printf("Aluno aprovado.\n");

                printf("Media final: %.1lf\n",sum);
            }
            if(sum<=4.9){
                printf("Aluno reprovado.\n");

                printf("Media final: %.1lf\n",sum);
                
            }

        }



    return 0;
}