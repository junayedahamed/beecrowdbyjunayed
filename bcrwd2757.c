#include <stdio.h>

int main() {
 int a;
 unsigned short int b,c;
 scanf("%d%hu%hu",&a,&b,&c);
 printf("A = %d, B = %hu, C = %hu\n",a,b,c);
 printf("A = %10d, B = %10hu, C = %10hu\n",a,b,c);
 printf("A = %010d, B = %010hu, C = %010hu\n",a,b,c);
 printf("A = %-10d, B = %-10hu, C = %-10hu\n",a,b,c);


    return 0;
}