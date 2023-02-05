// return  a pointer form a function that returns an array of N even interger 
#include<stdio.h>
int *func(int *p, int n){
    for(int i = 0; i < n; i++){
        *(p+i) = 2*i;
    }
    return p;
}
int main(){
    int n, *p;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n];
    p = func(arr,n);
    for(int i = 0; i < n; i++){
        printf("%d ",*(p+i));
    }
    return 0;
}