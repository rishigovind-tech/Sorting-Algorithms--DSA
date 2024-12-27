#include <stdio.h>

int maxE(int arr[], int size)
{

    int max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void countSort(int arr[], int size)
{

    int max = maxE(arr, size);
    int b[size];
    int count[max + 1];

    //setting elements of count as zero.....

    for (int i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }

    //store the elements count

    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }

    // cumaltive of the element count
    
    for (int i = 1; i <= max; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    
    
    for (int i = size - 1; i >= 0; i--)
    {
        b[--count[arr[i]]] = arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = b[i];
    }
}

void arrayPrint(int arr[],int size){

    for (int i = 0; i < size; i++)
    {
        printf("%d,",arr[i]);
    }
    
}

int main()
{

    int arr[] = {8,1,20,5,9,5,6,7,0,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    countSort(arr,size);
    arrayPrint(arr,size);

    // printf("%d",maxE(arr,size));
}