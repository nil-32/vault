#include <stdio.h>
#include <stdlib.h>

void getNumbers( int *kacblok,int *kacsatir , int *columnmaxi, int arr[*kacblok][*kacsatir][*columnmaxi]) {

 int m, n , p ;

    for( m = 0; m < *kacblok; m++)
    {
        for( n = 0; n < *kacsatir; n++)
        {
            for( p = 0; p < *columnmaxi; p++)
            {
            if (n==p){arr[m][n][p]=m+1;}
            else{arr[m][n][p]=m;}
            }
        }
    }

}
void printNumbers(int *kacblok,int *kacsatir,int *columnmaxi, int num1[*kacblok][*kacsatir][*columnmaxi]) {


    int m, n , p ;
    for( m = 0; m < *kacblok; m++)
    {
    printf("block %d\n",m+1);
        for( n = 0; n < *kacsatir; n++)
        {
            for( p = 0; p < *columnmaxi; p++)
            {

            printf("%2d", num1[m][n][p]);
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
    int arr[kacblok][kacsatir][columnmaxi];
    getNumbers(&kacblok,&kacsatir , &columnmaxi,arr);
    printNumbers(&kacblok,&kacsatir,&columnmaxi,arr);
}
