#include<stdio.h>
int main()
{
    int x,i,count=0,read=0,val=0;

    while(1) {

    scanf("%d",&x);
        if(x==4){
            break;
        }
        else {
         if(x==1){
            count++;
        }
        else if(x==2){
            read++;
        }
       else if(x==3){
            val++;
        }
        else continue;
        }

    }
       printf("MUITO OBRIGADO\n");
       printf("Alcool: %d\n",count);
       printf("Gasolina: %d\n",read);
       printf("Diesel: %d\n",val);

       return 0;

}