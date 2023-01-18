#include <stdio.h>
int main()
{
     printf("enter the number you want to find the factoiral of \n");
     int a;
     scanf("%d", &a);
      int y=a;
      int u=a-1;
     while(u!=1){
         y=y*u;
          u--;
     }
     printf("%d",y);
     return 0;
}