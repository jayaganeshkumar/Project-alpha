#include <stdio.h>
int main() {
    int r, c, i, j;
    printf("Enter number of rows and columns one by one: "); 
    scanf("%d %d", &r, &c);
    int a[r][c], transpose[c][r];
    printf("Enter the elements of the matrix one by one: ");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
          
            scanf("%d", &a[i][j]);
        }

   

    // Finding the transpose of matrix a
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            transpose[j][i] = a[i][j];
        }

   printf("Transpose of the given matrix is: ");
    for (i = 0; i < c; ++i)
        for (j = 0; j < r; ++j) {
            printf("%d ", transpose[i][j]);
            if (j == r - 1)
                printf("\n");
        }
    return 0;
}
