
//C program to demonstrate malloc() function memory allocation

#include<stdio.h>
#include<malloc.h>
int main(){
    int *p,n,i;
    printf("Enter n: ");
    scanf("%d",&n);
    p = (int *)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d",p+i);
    }
    for(int i = 0; i < n; i++){
        printf("%d",*(p+i));
    }
    return 0;
}