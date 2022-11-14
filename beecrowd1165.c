#include <stdio.h>
int main()
{

    int t, i, p,  x = 0;

    scanf("%d", &t);

    for (i = 1; i <= t; i++)
    {

        scanf("%d", &p);

        for (int j = 2; j < p; j++)
        {

            if( p % j==0){
                    x=1;
                    break;
             }
            if(p%j!=0){
            x=0;
             }
        }
        if(x==0){
            printf("%d eh primo\n",p);
        }
        else{
            printf("%d nao eh primo\n",p);
        }
        x==0;
       


    }

    return 0;
}