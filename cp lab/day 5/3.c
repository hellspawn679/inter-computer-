#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of an array \n");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int y[n];
    printf("cycled array is\n");
    y[0] = a[n - 1];
    printf("%d\n", y[0]);
    for (int i = 1; i < n; i++)
    {
        y[i] = a[i - 1];
        printf("%d\n", y[i]);
    }

    return 0;
}