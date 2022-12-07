#include <stdio.h>

int main()
{
    int x=0;
    int a,b,i,j;
    int myarray[a][b];
    
    for ( a = 0; a < 9; a++)
    {
        for ( b = 0; b < 9; b++)
        {
            myarray[a][b]=x;
            printf("%d ", myarray[a][b]);
            x++;
        }
    }
   
    for ( i = 0; i < 9; i++)
    {
        for ( j = 0; j < 9; j++)
        {
            printf("%d \n", myarray[i][j]);
        }
    } 
    return 0;
}
