//write a C program to demostrate  callc() function memory allocation


#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p,n,i;
    printf("Enter n: ");
    scanf("%d",&n);
    p = (int *)calloc(n,sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d",p+i);
    }
    for(int i = 0; i < n; i++){
        printf("%d",*(p+i));
    }
    return 0;
}