#include <stdio.h>
int main()
{
    int i, n;
    // initialise the first and second terms
    int t1 = 0, t2 = 1;
    // initialise the next term (3rd term)
    int nextterm = t1 + t2;
    // get no. of terms from user
    printf("Enter the number of terms");
    scanf("%d", &n);
    // print the first two terms t1 and t2
    printf("Fibonacci series %d\t%d\t", t1, t2);
    // print 3rd to nth terms
    for (i = 3; i <= n; ++i)
    {
        printf("%d\t", nextterm);
        t1 = t2;
        t2 = nextterm;
        nextterm = t1 + t2;
    }
    return 0;
}
