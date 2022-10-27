#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    
    double x,y,a,b,sum1=0,sum2=0,sum=0,avg=0;

    while (1)
    {
        func:{
                cin>>x;

                if(x>=0 and x<=10){

                    sum1=sum1+x;
                }
                else{
                    cout<<"nota invalida"<<endl;
                }
                if(sum1==0){
                    goto func;
                }
        }
        func1:{
                cin>>y;

                if(y>=0 and y<=10){

                    sum2=sum2+y;
                }

                 else{
                    cout<<"nota invalida"<<endl;
                }
                if(sum2==0){
                    goto func1;
                }



        }
                 sum=sum1+sum2;

                avg=sum/2;

                 cout<<fixed<<setprecision(2);
                cout<<"media = "<<avg<<endl;
                cout<<"novo calculo (1-sim 2-nao)"<<endl;

                sum=0;

                sum1=0;

                avg=0;

                sum2=0;
                


func3:{
                cin>>a;

                if(a==1){

                    goto func;

                    goto func1;
                }
                if(a==2){

                    break;
                }
                else{
                    cout<<"novo calculo (1-sim 2-nao)"<<endl;
                    goto func3;
                }

    }

    }


    return 0;
}