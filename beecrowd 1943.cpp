#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    if(n==1){
        cout<<"Top 1"<<endl;

    }
    if(n>=2&&n<=3){
        cout<<"Top 3"<<endl;
         }
    if(n>=4&&n<=5){
        cout<<"Top 5"<<endl;
            }

     if(n>=6&&n<=10){
        cout<<"Top 10"<<endl;
         }
          if(n>=11&&n<=25){

        cout<<"Top 25"<<endl;
    }
     if(n>=26&&n<=50){
            
        cout<<"Top 50"<<endl;
    }
     if(n>=51&&n<=100){
            
        cout<<"Top 100"<<endl;
    }
    



    return 0;
}