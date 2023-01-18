#include <stdio.h>
int main()
{
    printf("enter a number where you want to find prime number\n ");
    int n;
    scanf("%d", &n);
    printf("2\n");
    for (int i = 3; i <= n; i++)
    {
        int y = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                y = 1;
            }
        }
        if (y == 1)
        {
        }
        else
        {
            printf("%d\n",i);
        }
    }
    return 0;
}