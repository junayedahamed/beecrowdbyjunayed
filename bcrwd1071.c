#include<stdio.h>
int main()
{

    int x,y,i,sum=0,min,max;
    scanf("%d%d",&x,&y);
    if(x>y){
        min=y;
        max=x;
    }
    else {
        min=x;
        max=y;
    }
    for(i=(min+1);i<max;i++){
            if(i%2!=0){
                sum=sum+i;
            }

    }
    printf("%d\n",sum);
    return 0;
}

// 1071 solve in function

// #include<stdio.h>
// int sumco(int x,int y,int max,int min,int sum){
//         if(x>y){
//             max = x;
//             min = y;
//         }
//         else{

//             max = y;
//             min = x;
//         }

//         for (int i = (min+1); i < max;i++){

//             if(i%2!=0){
//                 sum = sum + i;

//             }

//         }
//         return sum;
// }

// int main(){
//     int x, y,max,min,sum=0;

//     scanf("%d %d", &x, &y);

//     printf("%d\n", sumco(x, y,max,min,sum));

//    return 0;
// }
