#include <stdio.h>

int main()
{
    int i, j, k;
    int a[2][3][4] = {
        {
            {1, 3, 2, 4}, {1, 4, 2, 3}, {4, 2, 5, 7}
        },
        {
            {2, 4, 3, 7}, {3, 1, 0, 7}, {6, 3, 8, 9}
        }
    };

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 4; k++) {
                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
