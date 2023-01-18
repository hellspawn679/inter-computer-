//creatd by mehul gautam
//roll number =040
// write a c program to find maximum between three numbers 
// intput range - (-32768 to 32768)
// output range - (-32768 to 32768)
#include <stdio.h>
int main(){
    int num1=num2=num3=0;
    printf("Enter the first number ");
    scanf("%d",&num1);
    printf("Enter the second number ");
    scanf("%d",&num2);
    printf("Enter the third number ");
    scanf("%d",&num3);
    int sum =num1+num2+num3;
    if((num1>num2)&&(num1>num3)){
        printf("%d is the greatest number",num1);
    }
    else if((num2>num1)&&(num2>num3)){
        printf("%d is the greatest number",num2);
    }
    else if((num3>num2)&&(num3>num1)){
        printf("%d is the greatest number",num3);
    }
    else{
        printf("all numbers are equal\n");
    }
    return 0;
}