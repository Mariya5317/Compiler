#include <stdio.h>
int main()
{
    int i, j, r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);


    for(i=1; i<=r; i++)
    {
        for(j=r; j>i; j--)
        {
            printf(" ");
        }
      printf("*");
        for(j=1; j<(i-1)*2; j++)
        {
            printf(" ");
        }
        if(i==1) printf("\n");
      else printf("*\n");
    }

    for(i=4; i>=1; i--)
    {
        for(j=5; j>i; j--)
        {
            printf(" ");
        }
      printf("*");
        for(j=1; j<(i-1)*2; j++)
        {
            printf(" ");
        }
        if(i==1) printf("\n");
      else printf("*\n");
    }

    return 0;
}
