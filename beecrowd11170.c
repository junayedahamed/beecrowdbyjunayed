#include <stdio.h>
int main()
{
    int n, sum = 0, count = 0,  val = 0;
  float x;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        scanf("%f", &x);

        while (x > 1){
           

            x = x / 2;
             
        count++;
       
        
        }

        printf("%d dias\n", count);

        count=0;
        }

        

    return 0;
}
