#include <stdio.h>
int main(void)
{
    int k, w;
    long int n, borrow, total = 0;
    // printf("Enter the cost of first banana: ");
    scanf("%d", &k);
    // printf("Enter initial amount with soldier: ");
    scanf("%li", &n);
    // printf("Enter total number of bananas he want to buy: ");
    scanf("%d", &w);
    for (int i = 1; i <= w; i++)
    {
        total = (total + (i * k));
    }
    // printf("%li", total);
    borrow = total - n;
    if (borrow <= 0)
    {
        printf("0");
    }
    else
    {
        printf("%li\n", borrow);
    }
}