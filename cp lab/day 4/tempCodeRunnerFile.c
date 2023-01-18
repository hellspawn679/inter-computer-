#include <stdio.h>
int main()
{
    int n;
run:
    printf("Enter the size of the base(as a odd number ) of the trinagle : ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("wrong input please enter a odd numnber \n");
        goto run;
    }
    else
    {
        char c = ' ';
        char d = '*';
        char arr[n];
        int left = n / 2;
        int right = n / 2;
        for (int i = 0; i < (n + 1) / 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((j == right) || (j == left))
                {
                    arr[j] = d;
                }

                else
                {
                    arr[j] = c;
                }
                printf("%d", arr[j]);
            }
            right = right + 1;
            left = left - 1;
            printf("\n");
        }
    }
}

return 0;
}