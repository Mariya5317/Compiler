#include <stdio.h>
int main()
{
    int i, j, k, l, rows1, rows2;
    printf("Enter number of rows : ");
    scanf("%d", &rows1);
      for(i=1; i<=rows1; i++)
    {
       for(j=i; j<rows1; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }
       printf("\n");
    }
    printf("Enter number of rows : ");
    scanf("%d", &rows2);
          for(k=1; k<=rows2; k++)
    {
       for(l=k; l<rows2; l++)
        {
            printf(" ");
        }
        for(l=1; l<=(2*k-1); l++)
        {
            printf("*");
        }
       printf("\n");
    }

    return 0;
}
