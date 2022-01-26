#include <stdio.h>

int count = 0;
int fun1(int a, int b)
{
    if (a > b)
    {
        return count;
    }
    else
        {
            a *= 3;
            b *= 2;
            count++;
            fun1(a, b);
        }
}
int main(void)
{
    int m, n;
    scanf("%d %d", &m, &n);
    int x = fun1(m, n);
    printf("%d", x);
}