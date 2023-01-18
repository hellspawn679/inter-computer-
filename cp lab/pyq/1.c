#include <stdio.h>
int main()
{
    float a, b;
    scanf("%f %f", &a, &b);
    for (float i = a; i < b; i += 0.5)
    {
        printf("%f\n",i);
    }
    return 0;
}