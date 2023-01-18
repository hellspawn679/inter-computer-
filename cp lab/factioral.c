#include <stdio.h>
int main()
{
    long int num1;
    long p=1;

printf("enter any number");
scanf("%d",&num1);

for(int i=1;i<=num1;i++)
{
    p=p*i;

}
  printf("the factorial of number is %d",p);
  return 0;
}