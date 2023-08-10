#include<iostream>
using namespace std;
int main(){
    int players, match,count=0,countplayer=0,x=0;
    cin >> players >> match;


    for (int i = 1; i <= players;i++){
        for (int j = 1; j <=match;j++){
            cin >> x;
            if(x>0){
                count++;
            }
            
        }
       
        if(count==match){
            
            countplayer++;
        }
        count = 0;

       
    }
    cout << countplayer << endl;
    return 0;
}