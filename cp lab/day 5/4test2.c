#include <stdio.h>
int main()
{
    int arr_size;
    printf("Enter size of array: ");
    scanf("%d", &arr_size);
    int a[arr_size];
    int occ[arr_size];
    printf("Enter the elements of array \n");
    for (int i = 0; i < arr_size; i++)
    {
        scanf("%d", &a[i]);
        occ[i] = 0;
    }
    for (int i = 0; i < arr_size; i++)
    {
        int co = 1;
        for (int j = i + 1; j < arr_size; j++)
        {
            if ((a[i] == a[j]) && (occ[i] == 0))
            {
                co++;
                occ[j] = -1;
            }
        }
        if ((co > 1) && (occ[i] != -1))
        {

            printf("the occurece of %d is %d \n", a[i], co);
        }
    }

    return 0;
}