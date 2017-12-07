#include <stdio.h>
int main()
{
    int i, j, r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(i==1 || i==r || j==1 || j==c)
            {
                printf("%d", j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
