// a program to return multiple values from function using pointers 
#include<stdio.h>

void func(int a, int b, int *s, int *p, int *d){
    *s = a+b;
    *p = a*b;
    *d = a-b;
}

int main(){
    int a,b,s,p,d;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    func(a,b,&s,&p,&d);
    printf("Sum = %d, Product = %d, Difference = %d",s,p,d);
    return 0;
}