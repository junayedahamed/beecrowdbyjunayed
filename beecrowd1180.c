#include <stdio.h>
int main()
{
     int  i,x;
     scanf("%d", &x);
  
    int M[x];
   
    int cought=0;

    for (i = 0; i < x; i++)
    {

        scanf("%d",&M[i]);
        

    }
     int  small =M[0];

        for(i=0; i< x ;i++){

        if(small>M[i]){
            
          small =M[i];
        cought=i;

        }
      }

      printf("Menor valor: %d\n",small);
      printf("Posicao: %d\n",cought);
      


    return 0;
}