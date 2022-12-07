#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX(a,b) (((a)>(b))?(a):(b))

int main()
{
    int x,n,m;
    int column = 1,row = 1;

    printf("kaca kadar? : ");
    scanf("%d", &x);
    printf("\n");

    for(row = 1; row <= 2*x-1; row++){
            for(column = 1; column <= 2*x-1 ; column++)
                printf("%d ",MAX(abs(x-row),abs(x-column))+1);

            printf("\n");
    }

    return 0;
}
