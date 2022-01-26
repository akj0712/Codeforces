#include<stdio.h>
int main(void){
    int n, count = 0;
    char s[50];
    scanf("%d", &n);
    scanf("%s", s);
    for (int i = 0; i < n-1; i++)
    {
        if (s[i] == s[i+1])
        {
            count++;
        }
    }
    printf("%d", count);
    
}