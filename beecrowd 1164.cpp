#include<iostream>
using namespace std;

int main(){

       long long int n,i,x,sum=0;


        cin>>n;

        for(i=1;i<=n;i++){

            cin>>x;
            for (int  s = 1; s < x; s++)
            {
                if(x%s==0){

                    sum=sum+s;
                   

                    
                }

            }
            if(sum==x){

                cout<<x<<" eh perfeito"<<endl;
                sum=0;
            }
            else{

                cout<<x<<" nao eh perfeito"<<endl;
                sum=0;
            }
            
        }


        return 0;
}