#include <stdio.h>

int getMax(int arr[], int size)
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

void countSort(int arr[], int size, int pos)
{
    int count[10] = {0};
    int b[size];

    for (int i = 0; i < size; i++)
    {
        count[(arr[i] / pos) % 10]++;
    }

    for (int i = 1; i < 10; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    for (int i = size - 1; i >= 0; i--)
    {
        b[--count[(arr[i] / pos) % 10]] = arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = b[i];
    }
}

void radixSort(int arr[], int size)
{
    int max = getMax(arr, size);
    for (int pos = 1; (max / pos) > 0; pos = pos * 10)
    {

        countSort(arr, size, pos);
    }
}

void arrayPrint(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }
}

int main()
{
    int arr[] = {55, 48, 231, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    radixSort(arr, size);
    arrayPrint(arr, size);
}