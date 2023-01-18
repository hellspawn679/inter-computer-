#include<stdio.h>
int main()
{
    printf("enter a number till where you want to find even and odd\n");
    int n ;
    scanf("%d",&n);
    //print all even number 
    printf(" all even numbers are \n");
    for(int i =1;i<=n;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    printf(" all odd numbers are \n");
    for(int i =1;i<=n;i++){
        if(i%2==1){
            printf("%d\n",i);
        }
    }

    return 0;
}