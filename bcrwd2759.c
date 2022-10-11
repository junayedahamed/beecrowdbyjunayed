#include<stdio.h>
int main(){
char ch1;
char ch2;
char ch3;
scanf("%c %c %c",&ch1,&ch2,&ch3);
printf("A = %c, B = %c, C = %c\n",ch1,ch2,ch3);
printf("A = %c, B = %c, C = %c\n",ch2,ch3,ch1);
printf("A = %c, B = %c, C = %c\n",ch3,ch1,ch2);
return 0;    
}