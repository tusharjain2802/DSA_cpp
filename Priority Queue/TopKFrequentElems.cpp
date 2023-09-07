// https://leetcode.com/problems/top-k-frequent-elements/description/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;//n
        }
        priority_queue<pair<int, int>> pq;
        for(auto i:m){
            pq.push({i.second, i.first});//n
        }
        vector<int> v;
        for(int i=0;i<k;i++){
            v.push_back(pq.top().second);
            pq.pop();//klogn
        }
        return v;
    }
};