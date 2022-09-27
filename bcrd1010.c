#include<stdio.h>
int main()
{
    int cod1,unit1,cod2,unit2;
    float price1,price2,value;


    scanf("%d%d",&cod1,&unit1);
    scanf("%f",&price1);

    scanf("%d%d",&cod2,&unit2);
    scanf("%f",&price2);

     value=(price1*unit1)+(price2*unit2);

     printf("VALOR A PAGAR: R$ %.2f\n",value);

     return 0;

}