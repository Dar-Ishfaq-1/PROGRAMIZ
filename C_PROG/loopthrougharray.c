// Online C compiler to run C program online
#include <stdio.h>
int array[3][4]={ {1,3,2,4},
                  {9,4,6,8},
                  {8,2,4,3}};
                 
int main() {
int rows = 3;
int cols = 4;

for(int i=0; i<rows; i++){
for(int j=0; j<cols; j++){
    printf("%d\t",array[i][j]);
    
}
printf("\n");
}
    return 0;
}