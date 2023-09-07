#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count=1;
    int mat[n][n];
    for(int i=1;i<=n;i++){
    	for(int j=1,k=i;k>=1 && k<=n;j++,k--){
    		mat[j][k]=count;
    		count++;
    }
    }
    for(int i=2;i<=n;i++){
    	for(int j=i,k=n;j<=4;j++,k--){
    		mat[j][k]=count;
    		count++;
    	}
    }
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		printf("%d\t",mat[i][j]);
    		
    }
    cout<<endl;
    }
	return 0;
}

