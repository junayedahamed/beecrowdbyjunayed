#include<stdio.h>
int main(){
    int arr[10];
    int i;
    for(i=1;i<=10;i++){
        scanf("%d",&i);
        if(i<=0){
            i=1;
        }
    }
    printf("%d\n",arr[1]);
      printf("%d\n",arr[2]);
        printf("%d\n",arr[3]);
          printf("%d\n",arr[4]);
            printf("%d\n",arr[5]);
              printf("%d\n",arr[6]);
                printf("%d\n",arr[7]);
                  printf("%d\n",arr[8]);
                    printf("%d\n",arr[9]);
                      printf("%d\n",arr[10]);
}