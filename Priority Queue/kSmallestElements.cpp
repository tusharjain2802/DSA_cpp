#include <iostream>
#include <vector>
#include <algorithm>
#include<queue>

using namespace std;

/********************************************************************************************/
vector<int> kSmallest(int arr[], int n, int k) {
    priority_queue<int> pq;
    int i=0;
    for(i=0;i<k;i++){
        pq.push(arr[i]);
    }
    for(int j=i;j<n;j++){
        if(arr[j]<pq.top()){
            pq.pop();
            pq.push(arr[j]);
        }
    }
    vector<int> vec;
    while(!pq.empty()){
        vec.push_back(pq.top());
        pq.pop();
    }
    return vec;
}
/********************************************************************************************/

int main() {
    int size;
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> input[i];
    }

    int k;
    cin >> k;

    vector<int> output = kSmallest(input, size, k);
    sort(output.begin(), output.end());

    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }

    delete[] input;
}