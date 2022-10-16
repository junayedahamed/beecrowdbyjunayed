#include<stdio.h>
int main(){

long int x,a,b,sum=0;
char ch;


scanf("%ld",&x);

scanf("%ld %c %ld",&a,&ch,&b);
switch(ch) {

case '+':  sum=a + b;


if(sum<=x){
    printf("OK\n");
    break;
}
else if (sum>x){
    printf("OVERFLOW\n");
    break;
}
case '-':
    sum=a - b;
    if(sum<=x){
    printf("OK\n");
    break;
}
else if (sum>x){
    printf("OVERFLOW\n");
    break;
}
case '*':
    sum=a * b;
    if(sum<=x){
    printf("OK\n");
    break;
}
else if (sum>x){
    printf("OVERFLOW\n");
    break;
}
case '/':
    sum=a / b;
    if(sum<=x){
    printf("OK\n");
    break;
}
else if (sum>x){
    printf("OVERFLOW\n");
    break;
}


}


return 0;}