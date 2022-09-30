#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    char b[10];

    char c[10];
    scanf("%s %s %s",&a,&b,&c);
    if(a[0]=='v'&&b[0]=='a'&&c[0]=='c'){
    printf("aguia\n");
           }
             if(a[0]=='v'&&b[0]=='a'&&c[0]=='o'){
            printf("pomba\n");
            }
            if(a[0]=='v'&&b[0]=='m'&&c[0]=='o')  {
           printf("homen\n");
           }
              if(a[0]=='v'&&b[0]=='m'&&c[0]=='h'){
              printf("vaca\n");
              }
                  if(a[0]=='i'&&b[0]=='i'&&c[2]=='h'){
                 printf("pulga\n");
                 }
                  if(a[0]=='i'&&b[0]=='i'&&c[2]=='r'){
                 printf("lagarta\n");
                 }
                  if(a[0]=='i'&&b[0]=='a'&&c[0]=='h'){
                 printf("sanguessuga\n");
                 }
                  if (a[0]=='i'&&b[0]=='a'&&c[0]=='o') {
                  printf("minhoca\n");}
                  return 0;

}