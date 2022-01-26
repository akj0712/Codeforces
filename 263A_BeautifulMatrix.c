#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a[5][5];
    int move, loc1, loc2, mid1, mid2;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 1)
            {
                loc1 = i;
                loc2 = j;
            }
            
        }
    }
    // printf("%d\n", loc1);
    // printf("%d\n", loc2);
    mid1 = 2;
    mid2 = 2;
    move = abs(mid1 - loc1) + abs(mid2 - loc2);
    printf("%d", move);
}