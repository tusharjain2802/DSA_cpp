#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int highestFrequency(int arr[], int n) {
    unordered_map<int, int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    int max=INT_MIN, num;
    for(int i=0;i<n;i++){
        if(m[arr[i]]>max){
            num = arr[i];
            max = m[arr[i]];
        }
    }
    return num;
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << highestFrequency(arr, n);

    delete[] arr;
}