#include <iostream>
using namespace std;

/********************************************************************************************/
#include<bits/stdc++.h>
int lengthOfLongestSubsetWithZeroSum(int* arr, int n) {
    unordered_map<int, int>m;
    m[0]=0;
    int sum=0;
    int ans=0;
    int max=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(m.find(sum)!= m.end() ){
            //cout<<sum<<" ";
            ans = i-m[sum]+1;
            if(max<ans){
                max=ans;
            }
        }
        else m[sum] = i+1;
    }
    return max;
}
/********************************************************************************************/

int main() {
    int size;
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << lengthOfLongestSubsetWithZeroSum(arr, size);

    delete[] arr;
}