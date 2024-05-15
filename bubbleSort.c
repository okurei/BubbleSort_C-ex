#include <stdio.h>
#include <stdlib.h>

int getSizeAr();
void bubbleSort();

int main()
{
    int s = getSizeAr(s);
    int *array = (int *)malloc(s * sizeof(int));
    
    if (array == NULL)
    {
        printf("Error, closing.\n");
        return 1;
    }
    printf("Enter %i element: ", s);
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Your element are: ");
    for (int i = 0; i < s; i++)
    {
        printf(" %i", array[i]);
    }
    printf("\n");

    bubbleSort(array, s);

    printf("Sorted array: ");
    for (int i = 0; i < s; i++)
    {
        printf(" %d", array[i]);
    }
    free(array);
    return 0;
}

int getSizeAr()
{
    int s;
    printf("Define the number of data: ");
    scanf(" %i", &s);
    return s;
}

void bubbleSort(int array[], int size)

{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
