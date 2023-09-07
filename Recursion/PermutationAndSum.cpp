// https://practice.geeksforgeeks.org/problems/permutations-and-sum3001/1

//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
	vector<vector<int>> ans;
    void permute(vector<int> nums,int idx){
        if(idx == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
          if(nums[i]==nums[idx]&&i!=idx)continue;
        else  if(i!=idx&&nums[i]==nums[i-1])continue;
          swap(nums[i],nums[idx]);
          permute(nums,idx+1);
        }
        return;
    }
	vector<int> permutaion(int N) {
	    vector<int> nums;
	    while(N>0){
	        int num = N%10;
	        nums.push_back(num);
	        N = N/10;
	    }
	    sort(nums.begin(), nums.end());
        permute(nums, 0);
        vector<int> v;
        int sum=0;
        v.push_back(ans.size());
        for(int i=0;i<ans.size();i++){
            int temp=0;
            for(int j=ans[0].size()-1;j>=0;j--){
                temp = temp*10;
                temp+= ans[i][j];
            }
            sum+=temp;
        }
        v.push_back(sum);
        return v;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.permutaion(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends