#include <stdio.h>
int main()
{
    int i, j, r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);

   for(i=r; i>=1; i--)
    {
        for(j=i; j<r; j++)
        {
            printf(" ");
        }

        for(j=i; j<=r; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }
return 0;
}
