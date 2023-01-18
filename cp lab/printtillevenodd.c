//10-12-2022 , mehul gautam 2022img040
//print all even and odd number from 1 to n 


#include<stdio.h>
int main()
{
    int i,n;
    printf("print all even and odd  numbers till :\n");
    scanf("%d",&n);
   printf("even numebers are ");
    for(i=1;i<=n;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
        
    }
    printf("odd numbers are ");
    for(i=1;i<=n;i++){
        if(i%2==1){
            printf("%d\n",i);
        }
        
    }
     return 0;
}