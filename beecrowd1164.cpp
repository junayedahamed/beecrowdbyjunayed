#include <iostream>
using namespace std;

int main()
{

    long long int n, i, x, sum = 0;

    cin >> n;

    for (i = 1; i <= n; i++)
    {

        cin >> x;
        for (int s = 1; s < x; s++)
        {
            if (x % s == 0)
            {

                sum = sum + s;
            }
        }
        if (sum == x)
        {

            cout << x << " eh perfeito" << endl;
            sum = 0;
        }
        else
        {

            cout << x << " nao eh perfeito" << endl;
            sum = 0;
        }
    }

    return 0;
}

// beecrowd | 1164 solve in using function

// #include <stdio.h>
// int perfect(long long int i, long long int test, long long int num, long long int div, long long int sum)
// {
//     for (i = 1; i <= test; i++)
//     {

//         scanf("%lld", &num);

//         for (int i = 1; i < num; i++)
//         {

//             if (num % i == 0)
//             {

//                 sum = sum + i;
//             }
//         }
//         if (sum == num)
//         {

//             printf("%lld eh perfeito\n", num);
//             sum = 0;
//         }

//         else
//         {
//             printf("%lld nao eh perfeito\n", num);
//             sum = 0;
//         }

//         // printf("junayed\n");
//     }
// }

// int main()
// {

//     long long int test, i, num, div, sum = 0;
//     scanf("%lld", &test);

//     perfect(i, test, num, div, sum);
// }
