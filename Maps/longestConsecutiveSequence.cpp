#include <iostream>
#include <vector>
using namespace std;

/********************************************************************************************/
#include<bits/stdc++.h>
vector<int> longestConsecutiveIncreasingSequence(int *arr, int n) {
    unordered_map<int, int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    int longStreak=0;
    int num;
    for(int i=0;i<n;i++){
      if(m.find(arr[i]-1) == m.end()){
        int curr = arr[i];
        int currentStreak=0;
        while(m.find(curr+1) != m.end()){
          curr+=1;
          currentStreak++;
        }
        if(currentStreak>longStreak){
          longStreak = currentStreak;
          num = curr;
        }
      }
    }
    vector<int> vec;
    if (longStreak>0) {
      vec.push_back(num - longStreak);
      vec.push_back(num);
    }
    else {
      vec.push_back(arr[0]);
    }
    return vec;
}
/********************************************************************************************/

int main() {
    int size;
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    vector<int> ans = longestConsecutiveIncreasingSequence(arr, size);

    for (auto i = ans.begin(); i != ans.end(); ++i)
        cout << *i << " ";

    delete[] arr;
}
