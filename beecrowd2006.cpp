#include<iostream>
using namespace std;
int main(){
    int t,a,b,c,d,e;
    int count=0,read=0,val=0,sum=0,dcout=0,ecout=0;

    cin>>t;

    cin>>a>>b>>c>>d>>e;

    if(a==t){
        count++;
    }

    if(b==t){
        read++;
    }
    
    if(c==t){
        val++;
    }

    if(d==t){
       dcout++;
    }
    if(e==t){
        ecout++;
    }

sum=count+val+read+dcout+ecout;

cout<<sum<<endl;


    return 0;
}