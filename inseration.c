#include<stdio.h>

void insertionSort(int arr[],int size){

    for (int i = 1; i < size; i++)
    {
        int temp=arr[i];
        int j=i-1;

        while (j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
        
    }
    
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){

    int arr[]={2,3,1,4,6};
    int size=sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr,size);
    printArray(arr,size);
}