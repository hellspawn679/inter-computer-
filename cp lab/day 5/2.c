#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of an arry \n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of arr\n");
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int con;
    printf("enter the number you want to find occurance of \n");
    scanf("%d",&con);
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]==con){
          ans++;
        }
    }
    printf("the number of occurance of the element is %d",ans);
    return 0;
}