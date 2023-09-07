#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(7);
    nums.push_back(3);
    nums.push_back(6);
    nums.push_back(5);
    nums.push_back(6);
    int start =1;
    int end = nums.size()-1;
    int sum1=nums[0], sum2=0;       
    while(start!=end-2){
        if(sum1<sum2){
            sum1+=nums[start];
            start++;
        }
        else{
            sum2+= nums[end];
            end--;
        }
    }
    if(sum1==sum2) {
        cout<< start+1;
    }
    cout<<"-1";
}