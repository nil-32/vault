#include <stdio.h>
#include <stdlib.h>
#define X 100

typedef struct matrix {
    int t[100][100][100];
} Matrix;

Matrix getNumbers(int *kacblok,int *kacsatir , int *columnmaxi) {

 int m, n , p ;
    Matrix arr;

    for( m = 0; m < *kacblok; m++)
    {
        for( n = 0; n < *kacsatir; n++)
        {
            for( p = 0; p < *columnmaxi; p++)
            {
            if (n==p){arr.t[m][n][p]=m+1;}
            else{arr.t[m][n][p]=m;}
            }
        }
    }

    return arr;
}
void printNumbers(Matrix num1, int *kacblok,int *kacsatir,int *columnmaxi) {


    int m, n , p ;
    for( m = 0; m < *kacblok; m++)
    {
    printf("block %d\n",m+1);
        for( n = 0; n < *kacsatir; n++)
        {
            for( p = 0; p < *columnmaxi; p++)
            {

           	 printf("%2d", num1.t[m][n][p]);
				if(p==*columnmaxi-1)
				{printf("\n");}
            }
        if(n==*kacsatir-1){printf("\n\n");}
        }
    printf("\n");
    }
}

int main(){

    int kacblok,kacsatir,columnmaxi;
    printf("how many columns-rows-blocks would you like ?\n c-r-b\n");
    scanf("%d %d %d",&kacblok,&kacsatir,&columnmaxi);
    printNumbers( getNumbers(&kacblok,&kacsatir,&columnmaxi),&kacblok,&kacsatir,&columnmaxi);
}
