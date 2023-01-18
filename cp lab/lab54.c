#include<stdio.h>

int main()
{
    int n;
    printf("enter the size of an arry \n");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements of arr\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("the duplicates are \n");
    for(int i=0;i<n;i++){
      
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
              printf("%d\n", a[j]);   
            }
        }
    }

    return 0;
}