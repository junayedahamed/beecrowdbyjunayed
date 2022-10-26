#include<iostream>
using namespace std;
int main(){
        int x,i,y;
       
        cin>>x;

        for(i=1; i<=x; i++)
        {

             

            cin>>y;

            if(y==0){
                cout<<"NULL"<<endl;
            }
            if(y>0 and y%2==0){

                cout<<"EVEN POSITIVE"<<endl;
            }
            if(y>0 and y%2!=0){

                cout<<"ODD POSITIVE"<<endl;
            }

            if(y<0 and y%2==0){

                cout<<"EVEN NEGATIVE"<<endl;

            }
            if(y<0 and y%2!=0){

                    cout<<"ODD NEGATIVE"<<endl;

            }

          


         }

        


    return 0;
}