#include <stdio.h>
int main()
{
    int base;

    printf("enter the base size\n");
    scanf("%d", &base);
    // if (base % 2 == 0)
    // {
    //     printf("please enter a odd value again\n");
    //     while (base % 2 == 0)
    //     {
    //         scanf("%d", &base);
    //     }
    // }
    char c = '*';
    char s = ' ';
    char arr[base];
    for (int i = 0; i < base; i++)
    {
        arr[i] = s;
    }
    int right = (base / 2) + 2;
    int left = base / 2;

    for (int i = 0; i < (base / 2) + 1; i++)
    {
        arr[(base / 2) + 1] = c;
        for (int i = 0; i < base; i++)
        {
            printf("%c", arr[i]);
        }
        printf("\n");
        arr[right] = c;
        arr[left] = c;
        right = right+ 1;
        left -= 1;
    }

    return 0;
}