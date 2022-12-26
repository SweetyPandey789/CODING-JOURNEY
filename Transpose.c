#include <stdio.h>
int main()
{
    int m, n, matrix[10][10], transpose[10][10];
    printf("Enter number of rows and columns :\n");
    scanf("%d%d", &m, &n);

    printf("Enter elements of the matrix :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Entered matrix is :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("Transpose of matrix is :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d  ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}