// Polycarp and Sums of Subsequences
#include <stdio.h>
int main(void)
{
    int n;
    unsigned long int a[3], b[7];
    // printf("Enter the number of test cases: ");
    scanf("%d", &n);
    while (n--)
    {
        // printf("Enter 7 integers: ");
        for (int i = 0; i < 7; i++)
        {
            scanf("%ld", &b[i]);
        }
        a[0] = b[0];
        // printf("%d\n", a[0]);
        a[1] = b[1];
        // printf("%d\n", a[1]);
        a[2] = b[6] - (a[0] + a[1]);
        // printf("%d\n", a[2]);
        for (int i = 0; i < 3; i++)
        {
            printf("%ld ", a[i]);
        }
        printf("\n");
    }
}