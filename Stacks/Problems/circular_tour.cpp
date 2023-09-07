//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


// } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       int tot[n];
       for (int i=0;i<n;i++){
           tot[i] = p[i].petrol - p[i].distance;
       }
       int cost=0;
       for (int i=0;i<n;i++){
           cost+=tot[i];
       }
       if(cost<0) return -1;
       cost=0;
       int x=0;
       int y=0;
       while(x<=n-1){
           if(cost<0){
               cost-=tot[y];
               y++;
           }
           else{
               cost+=tot[x];
               x++;
           }
       }
       return y;
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}

// } Driver Code Ends