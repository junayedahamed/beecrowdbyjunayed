#include <stdio.h>
int main()
{
    
    // scanf("%d", &x);
     int  i;
    int M[100];
   
    int cought=0;

    for (i = 0; i < 100; i++)
    {

        scanf("%d",&M[i]);
        

    }
     int  big =M[0];

        for(i=0; i< 100 ;i++){

        if(big<M[i]){
            
          big =M[i];
        cought=i;

        }
      }

      printf("%d\n",big);
      printf("%d\n",cought+1);
      


    return 0;
}