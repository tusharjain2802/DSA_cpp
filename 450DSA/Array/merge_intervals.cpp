#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> V;
        V.push_back(intervals[0]);
        for(int i=1;i<intervals.size(); i++){
            if (V[V.size()-1][1]>= intervals[i][0]){
                V[V.size()-1][1] = max(V[V.size()-1][1], intervals[i][1]);
            }
            else{
                V.push_back(intervals[i]);
            }
        }
        return V;
    }
};
int main() {	
		int n, temp;
		cin>>n;
        vector<int> row;
		vector<vector<int>> intervals;
        for(int i=0; i<n; i++){ 
        vector<int> row;
        for(int j=0; j<2; j++){
        cin>>temp;
        row.push_back(temp);// I don't know how to push_back here!!
        }
        intervals.push_back(row);
}
		Solution ob;
		ob.merge(intervals);
}
