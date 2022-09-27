#include<stdio.h>
int main()
{

 long int x,h,fif,twn,tn,fv,tw,o,m,p,q,r,s,u;



scanf("%ld",&x);

h=(x/100);

m=(x-h*100);

fif=(m/50);
p=(m-fif*50);

twn=(p/20);
q=(p-twn*20);


tn=(q/10);

r=(q-tn*10);

fv=(r/5);
s=(r-fv*5);
tw=(s/2);
u=(s-tw*2);

o=(u/1);

printf("%ld\n",x);

printf("%ld nota(s) de R$ 100,00\n",h);

printf("%ld nota(s) de R$ 50,00\n",fif);

printf("%ld nota(s) de R$ 20,00\n",twn);

printf("%ld nota(s) de R$ 10,00\n",tn);

printf("%ld nota(s) de R$ 5,00\n",fv);

printf("%ld nota(s) de R$ 2,00\n",tw);

printf("%ld nota(s) de R$ 1,00\n",o);


return 0;
}