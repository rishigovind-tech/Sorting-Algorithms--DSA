#include <stdio.h>

int printArray(int arr[], int size)
{
    printf("The sorted array is : ");
    for (int i = 0; i < size; i++)
    {
        printf(" %d,", arr[i]);
    }
}

int partition(int arr[], int start, int end)
{

    int pvt = arr[start];
    int i = start;
    int j = end;

    while (i < j)
    {
        while (arr[i] <= pvt)
        {
            i++;
        }
        while (arr[j] > pvt)
        {
            j--;
        }
        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[start];
    arr[start] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(int arr[], int i, int j)
{

    if (i < j)
    {
        int loc = partition(arr, i, j);
        quickSort(arr, i, loc - 1);
        quickSort(arr, loc + 1, j);
    }
}

int main()
{

    int arr[] = {5, 1, 10, 3, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("The array to sort is : ");
    for (int i = 0; i < size; i++)
    {
        printf(" %d,", arr[i]);
    }
    printf("\n");

    quickSort(arr, 0, size - 1);

        printArray(arr, size);
}