//serach in an array
//roll number - 2022 IMG 040
//name-Mehul gautam
#include<stdio.h>
int search(int *arr,int n,int index){
    for(int i=0;i<n;i++){
        if(arr[i]==index){
            return i;
        }
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int index;
    scanf("%d",&index);
    int d= search(arr,n,index);
    printf("the index of the value is %d",d);
    return 0;
}