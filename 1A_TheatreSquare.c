#include<stdio.h>
int main(){
    long long int a, b, c, len, bre;
    scanf("%lld %lld %lld", &a, &b, &c);
    len = a/c;
    if (a%c!=0)
    len++;
    bre = b/c;
    if (b%c!=0)
    bre++;
    printf("%lld", len*bre);
    return 0;
}