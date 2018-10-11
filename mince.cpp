#include <stdio.h>

int main()
{
    int a,b,c,d;
    a=8;
    b=1;
    c=8;
    d=8;
    if (a==b)
    {
        if (a==c)
        {
            printf("coin d is fake");
        }
        else
        {
            printf("coin c is fake");
        }
    }
    else
    {
        if (a==c)
        {
            printf("coin b is fake");
        }
        else
        {
            printf("coin a is fake");
        }
    }
}