#include<iostream>
using namespace std;
int main(){
    int v,t,sum=0;

   

    while (scanf("%d %d",&v,&t) !=EOF) //due to not knowing eof use in c++ i use scanf function
    {
      if(v==0){

        sum=v*t;
        cout<<sum<<endl;
       
      }
      else{
        sum=(v*2)*t;
        cout<<sum<<endl;
       
       
      }
    
      
    }
      
    

    return 0;
}