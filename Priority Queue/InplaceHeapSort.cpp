#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void heaporder(int arr[], int child){
  while (child >= 1) {
    int parent = (child - 1) / 2;
    if (arr[parent] > arr[child]) {
      int temp = arr[parent];
      arr[parent] = arr[child];
      arr[child] = temp;
    } else {
      break;
    }
    child = parent;
  }
}

void heapify(int arr[], int n, int parent = 0) {
  int temp;
    int lchild = (parent*2)+1;
    int rchild = (parent*2)+2;
    
    while ((lchild < n && arr[parent] > arr[lchild]) ||
           (rchild < n && arr[parent] > arr[rchild])) {
      if(rchild<n&&arr[lchild]>arr[rchild]){
        swap(arr[rchild],arr[parent]);parent=rchild;
      }

else {
        swap(arr[lchild], arr[parent]);
        parent = lchild;
}
 lchild = (parent * 2) + 1;
 rchild = (parent * 2) + 2;
    }
}
void heapSort(int arr[], int n) {
    for(int i=1;i<n;i++){
      heaporder(arr, i);
    }
    int temp;
    while(n>0){
      temp = arr[0];
      arr[0] = arr[n-1];
      arr[n-1] = temp;
      heapify(arr, n - 1);
      n--;
    }
}

int main() {
    int size;
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> input[i];
    } 

    heapSort(input, size);

    for (int i = 0; i < size; i++) {
        cout << input[i] << " ";
    } 

    delete[] input;
}