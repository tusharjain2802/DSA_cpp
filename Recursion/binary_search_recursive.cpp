#include<bits/stdc++.h>
using namespace std;

int binarySearch(int input[], int size, int element) {
   int start = 0;
   int end = size-1;
   while(start<=end) {
      int mid = (start+end)/2;
      if( input[mid] == element) {
         return mid;
      } else if( element < input[mid] ) {
         end = mid-1;
      } else {
         start = mid+1;
      }
   }
   return -1;
}

int main(){
   int input[] = {12, 23, 4, 6 , -2, 45, 7, 65};
    cout<< binarySearch(input, 8, -2)<<endl;
}