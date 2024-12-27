#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int isModified = 0;  //setting flag
        for (int j = 0; j < size - 1 - i; j++)
        {

            if (arr[j + 1] < arr[j]) /*if (arr[j + 1] > arr[j]) ----------DESC*/
            {
                isModified = 1;
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if (!isModified)
        {
            printf("Array is already sorted : ");
            break;
        }
        printf("pass %d : ", i + 1);
        printArray(arr, size);
        printf("\n");
    }
}

int main()
{

    int arr[] = {10, 80, 3, 1, 8, 9, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, size);
    // printArray(arr, size);
}