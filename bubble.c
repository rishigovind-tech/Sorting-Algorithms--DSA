#include <stdio.h>

int bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j + 1] < arr[j])                                /*if (arr[j + 1] > arr[j]) ----------DESC*/
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
    }
}


int printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }
}


int main()
{

    int arr[] = {10,80,3,1,8,9,4};
    int size = sizeof(arr) / sizeof(arr[0]);

   bubbleSort(arr,size);
   printArray(arr,size);

}