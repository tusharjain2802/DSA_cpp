/*
An input string S of length N is transferred through the network using a special protocol. 
The protocol can send the string through a series of operations. 
In one operation, we can choose a lowercase english alphabet C and do one of the following:

Transfer 1 copy of C through the network.
Transfer 2 copies of C through the network.
Each of the above transfers take 1 unit of time.

Find the minimum time in which we can transfer the entire string S through the network.

Sample Input 1 
2
5
cbcdc
6
aabeee

Sample Output 1 
5
4

Explanation
Test Case 1: String can be transferred through following operations: 
send 1 copy of character c, send 1 copy of character b, 
send 1 copy of character c, send 1 copy of character d, 
and send 1 copy of character c. Thus, total 5 operations are required.

Test Case 2: String can be transferred through following operations: 
send 2 copies of character a, send 1 copy of character b, send 1 copy of character e, 
and send 2 copies of character e. Thus, total 4 operations are required.

*/
#include <iostream>
using namespace std;
int main() {
    int t,N,count,temp,inte;
    string X;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>N>>X;
        int count=1;
        temp = X[0];
        for(int j=1;j<N;j++){
            inte=X[j];
            if(temp== inte){
                temp=256;
            }
            else{
                temp=X[j];
                count++;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
