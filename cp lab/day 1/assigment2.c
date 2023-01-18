#include <stdio.h>
typedef double db;
int main()
{
    int i;
    db  temp;
run :
    printf("what unit do you want (1 for celcius / 2 for fharenhit)\n ");
    scanf("%d", &i);
    
    if (i == 1)
    {
        // take tempurature
        printf("enter tempurature here in celcius : ");
        scanf("%f", &temp);
        temp = ((5 * (temp - 32)) / 9);
        printf("the temprature in fharenhit is : %f", temp);
        
    }
    else if (i == 2)
    {
        // take tempurature
        printf("enter tempurature here in fharenhit : ");
        scanf("%f", &temp);
        temp = (((9 * temp) / 5) + 32);
        printf("the temprature in clesuis is : %f", temp);
        
    }
    else
    {
        printf("wrong input try agian \n");
        goto run;
    }


    return 0;
}