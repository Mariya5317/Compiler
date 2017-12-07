#include <stdio.h>
int main()
{
    int i, j, r;
     printf("Enter number: ");
    scanf("%d", &r);
    for(i=1;i<=r;i++)
    {
      for(j=r;j>i;j--)
        printf("  ");
      for(j=1;j<=i;j++)
          printf("%d ",j);
      for(j=j-2;j>=1;j--)
          printf("%d ",j);
      printf("\n");
    }
    return 0;
}
