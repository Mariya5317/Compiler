#include <stdio.h>
int main()
{
    int i, j, M;

    printf("Enter the Number of rows: ");
    scanf("%d", &M);

    for(i=1; i<=M; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
