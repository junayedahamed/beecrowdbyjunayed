#include <stdio.h>
int main()
{
    int test, num;
    scanf("%d", &test);

    for (int i = 1; i <= test; i++)
    {
        scanf("%d", &num);

        if (num % 2 == 0)
        {

            printf("0\n");
        }
        if (num % 2 != 0)
        {

            printf("1\n");
        }
    }

    return 0;
}