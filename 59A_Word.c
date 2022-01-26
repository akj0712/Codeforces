#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void){
    int small = 0, cap = 0, length;
    char s[100];
    // printf("Enter a string: ");
    gets(s);
    length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
            cap++;
        else
            small++;
    }
    // printf("%d\n", cap);
    // printf("%d\n", small);

    if (small >= cap)
    {
        for (int i = 0; i < length; i++)
        {
            s[i] = tolower(s[i]);
        }
        printf("%s",s);
    }
    else{
        for (int i = 0; i < length; i++)
        {
            s[i] = toupper(s[i]);
        }
        printf("%s",s);
    }
}
