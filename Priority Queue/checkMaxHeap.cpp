#include <iostream>
using namespace std;

/********************************************************************************************/
bool isMaxHeap(int arr[], int n) {
    int parent =0;
    int lchild = 1;
    int rchild = 2;
    bool f = true;
    while(lchild < n || rchild<n){
        if(lchild<n && arr[lchild]>arr[parent]){
            f=false;
        }
        if (rchild < n && arr[rchild] > arr[parent]) {
          f = false;
        }
        parent++;
        lchild = (parent*2)+1;
        rchild = (parent*2)+2;
    }
    return f;
}
/********************************************************************************************/

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << (isMaxHeap(arr, n) ? "true\n" : "false\n");

    delete[] arr;
}