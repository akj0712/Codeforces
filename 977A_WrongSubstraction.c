#include <stdio.h>
int main(void)
{
    int t;
    long int n;
    scanf("%li", &n);
    scanf("%d", &t);
    while (t--)
    {
        if (n % 10 == 0)
        {
            n = n / 10;
        }
        else
        {
            n = n - 1;
        }
    }
    printf("%li", n);
}
