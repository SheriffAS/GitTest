#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//vygenerovat 20 cisel , keno
int main()
{
    int x,i,j,match;
    srand(time(NULL));
    int keno[20];
    i=0;
    keno[0]=rand()%80+1;

    while (i<20)
    {
        x=rand()%80+1;
        match=0;

        for (j=0;j<i;j++)
        {
            if(x==keno[j]) {
                match = 1;
                break;
            }
        }
        if (match==0)
        {
            keno[i]=x;
            i++;
        }
    }
    for (j=0;j<20;j++){
        printf(" %d", keno[j]);
    }
}
// prerobit si ho !!!! poskusat