#include <stdio.h>
#include <string.h>
int main(void)
{
    int count = 0, length, final;
    char s[100];
    scanf("%s", s);
    length = strlen(s);
    // printf("%d\n", length);
    for (int i = 0; i < length -1 ; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (s[i] == s[j])
            {
                count = count + 1;
                break;
            }
            else
            {
                count = count;
            }
        }
    }
    // printf("%d\n", count);
    final = length - count;
    // printf("%d\n", final);
    if (final % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
        printf("IGNORE HIM!");
}