#include <iostream>
using namespace std; 
int partitionArray(int arr[], int low, int high) { 
    int pivot = arr[low];
       int count=0;
       for(int i = low+1;i<=high;i++){
           if(arr[i] <= pivot){
               count++;
           }
       }
       int pivotIndex = low + count;
       swap(arr[low], arr[pivotIndex]);
       int i = low;
       int j = high;
       while(i<=pivotIndex && j>=pivotIndex){
           while(arr[i]<= pivot ) i++;
           while(arr[j] > pivot) j--;
           if(i<pivotIndex && j>pivotIndex){
               swap(arr[i], arr[j]);
               i++;
               j--;
           }
       }
       return pivotIndex;
}
void quickSort(int arr[], int low, int high) {
    if(low>=high){
            return;
        }
        int part = partitionArray(arr, low, high);
        quickSort(arr, low, part-1);
        quickSort(arr, part+1, high);
} 
void quickSort(int input[], int n) {
    quickSort(input, 0, n - 1);
}