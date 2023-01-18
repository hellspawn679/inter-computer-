#include <stdio.h>
#include <vector.h>
int main()
{
    int n;
    printf("Enter the size of arr: ");
    scanf("%d", &n);
    int a[n];
    int check[n];
    printf("enter the elements of array :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        check[j] = 0;
    }
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((check[j] == 0) && (a[i] == a[j]))
            {
                a.insert({a[j]});
            }
        }
    }

    return 0;
}