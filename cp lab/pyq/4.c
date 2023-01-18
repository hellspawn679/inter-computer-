#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int pus =66;
    for (int i = 65; i < n+65; i++)
    {
        printf("%c", i);
        int max1=i;
        if(pus>max1){
            pus=66;
            printf("\n");
        }
        else{
            pus+=2;
        }
        
    }
    return 0;
}