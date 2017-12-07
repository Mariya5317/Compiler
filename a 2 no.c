#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int array[MAX_SIZE];
    int size, i, arrIndex, revIndex;
    int temp;
    printf("Enter size of the array: ");
    scanf("%d", &size);


    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }

    revIndex = 0;
    arrIndex = size - 1;
    while(revIndex < arrIndex)
    {
        temp = array[revIndex];
        array[revIndex] = array[arrIndex];
        array[arrIndex] = temp;

        revIndex++;
        arrIndex--;
    }
    printf("\nReversed array : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", array[i]);
    }
        return 0;
}
