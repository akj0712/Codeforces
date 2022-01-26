#include<stdio.h>
int main(void){
    int i, j, row, column, a=0, b=0, c=0;
    int mat[100][3];
    // printf("Enter the number of rows: ");
    scanf("%d", &row);
    column = 3;
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for ( j = 0; j < row; j++)
        a = a + mat[j][0];
    for ( j = 0; j < row; j++)
        b = b + mat[j][1];
    for ( j = 0; j < row; j++)
        c = c + mat[j][2];

    // printf("%d", a);
    // printf("%d", b);
    // printf("%d", c);

    if (a == 0 && b==0 && c==0)
        printf("YES");
    else
        printf("NO");
}