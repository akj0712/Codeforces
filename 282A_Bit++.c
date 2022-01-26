#include<stdio.h>
#include<string.h>
int main(void){
    int t, s = 0;
    char x[4];
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%s", &x);
        if ( (strcmp (x, "X++") == 0) || (strcmp(x , "++X") == 0) )
            s = s + 1;
        else if ( (strcmp (x,"X--") == 0) || (strcmp(x, "--X") == 0) )
            s = s - 1;
        else
        s = s;
    }
    printf("%d", s);
}