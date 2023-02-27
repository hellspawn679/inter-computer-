#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct dictionary{
    float Balance;
    int accountNumber;
    char name[100];
}person1;

int main()
{
    int n=0;
    printf("Enter the number of entries to be made \n");
    scanf("%d",&n);
    
    for (int i=1; i<=n; i++)
    {
        printf("Enter the name of the customer \n");
        char name_[100];
        scanf("%s",name_);
        
        printf("Enter the balance of the customer \n");
        scanf("%f",&person1.Balance);
        
        printf("Enter the account number of the customer \n");
        scanf("%d",&person1.accountNumber);
        
        printf("\n");
        
        strcpy(person1.name,name_);
        
        printf("Name= %s\n",person1.name);
        printf("Account number= %d\n",person1.accountNumber);
        printf("Salary= %f\n",person1.Balance);
        
        printf("\n");
    }
    
    
    
}