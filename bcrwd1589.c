#include <stdio.h>

int main() {
  
int x,i,a,b,area=0;
scanf("%d",&x);
for(i=1;i<=x;i++){
    scanf("%d %d",&a,&b);
    area=a+b;//lowest area could be sum of those 
    

    printf("%d\n", area);
    
}

    return 0;
}

