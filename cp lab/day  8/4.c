//swap two array 
//roll number 2022IMG040
//name-mehul gatuam 

#include<stdio.h>
void swap(int *arr1,int *arr2,int n){
    for(int i=0;i<n;i++){
        int c=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=c;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    swap(arr1,arr2,n);
    for(int i=0;i<n;i++){
        printf("%d",arr1[i]);
    
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d",arr2[i]);
    }

    return 0;
}