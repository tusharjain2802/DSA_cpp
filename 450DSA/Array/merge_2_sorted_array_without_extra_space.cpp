#include <bits/stdc++.h> 
using namespace std; 

class Solution{
    public:
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            long long i=n-1,j=0, temp,min;
            if(n<m){
                min=n;
            }
            else{
                min=m;
            }
            for(int k=0;k<min;k++){
                if(arr2[j] < arr1[i] && i>=0 && j<m){
                    temp = arr2[j];
                    arr2[j] = arr1[i];
                    arr1[i] = temp;
                    i--;
                    j++;
                }
                else{
                    break;
                }
            }
            sort(arr1,arr1 + n);
            sort(arr2, arr2+m);
        } 
};

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 
