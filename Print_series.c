// Write a program to print 1,-4,9,-16,25,-36

#include <stdio.h>
int main()
{
    int n, square;
    printf("Enter the value");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i% 2 == 0)
        {
            /* code */
            square = (-1) * i* i;
        }
        else
        {
            square = (1) * i * i;
        }
    
        printf("%d\t", square);
    }
    return 0;
}