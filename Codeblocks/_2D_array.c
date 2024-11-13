#include<stdio.h>

int main()
{
int i,j;
    int a[2][3] = {1,2,5,4,7,6};
    int b[3][4] = {{1,2,4,3},{2,4,3,1},{7,8,6,0}};

    //printf("%d\n",b[1][2]);

    //printf("%d",a[1][2]);
    printf("The elements of array a : ");
    for(i=0;i<2;i++){

        for(j=0;j<4;j++)
        {

           printf("%d\t",a[i][j]);
        }
    }



    printf("\nThe elements of array b : ");

     for(i=0;i<2;i++){

        for(j=0;j<4;j++)
        {

           printf("%d\t",b[i][j]);
        }
    }
    //printf("%d",a[1][2]);

    return 0;
}
