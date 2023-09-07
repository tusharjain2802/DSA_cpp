#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstOcc(vector<int>& nums, int n, int target){
        int start=0;
        int end = n-1;
        int mid = start + ((end - start)/2);
        int ans = -1;
        while(start<=end){
            if(nums[mid] == target){
                ans = mid;
                end = mid-1;
            }
            else if(nums[mid]<target){
                start = mid+1;
            }
            else{
                end = mid -1;
            }
            mid = start + ((end - start)/2);
        }
        return ans;
    }
    int lastOcc(vector<int>& nums, int n, int target){
        int start=0;
        int end = n-1;
        int mid = start + ((end - start)/2);
        int ans = -1;
        while(start<=end){
            if(nums[mid] == target){
                ans = mid;
                start = mid+1;
            }
            else if(nums[mid]<target){
                start = mid+1;
            }
            else{
                end = mid -1;
            }
            mid = start + ((end - start)/2);
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;

        int n= nums.size();
        ans.push_back(firstOcc(nums, n, target));
        ans.push_back(lastOcc(nums, n, target));
        return ans;
    }
};
