#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left[n], right[n],ans[n];
    for (int i=0;i<n;i++){
        left[i]=arr[i];
        for (int j=i;j>=0;j--){
            if(arr[j]>left[i]){
                left[i]=arr[j];
            }
        }
    }
    for (int i=n-1;i>=0;i--){
        right[i]=arr[i];
        for (int j=i;j<n;j++){
            if(arr[j]>right[i]){
                right[i]=arr[j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(right[i]>left[i]){
            ans[i]=left[i]-arr[i];
        }
        else{
            ans[i]=right[i]-arr[i]; 
    }  
}
int result=0;
for (int i = 0; i < n; i++)
    {
        result+=ans[i];
    }
    cout<<"Total trapped rain water is: "<<result;
}