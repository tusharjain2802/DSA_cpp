#include<iostream>
using namespace std;
class A{
	int **a;
	//dynamic memory allocation
	public:
	A(){
		//let the matrix is 3X2
		a=new int *[3];
		//It makes 3 rows.
		for(int i=0;i<3;i++){
			a[i] = new int[2];
			//gives 2 columns in each row.
		}
	}
	void input(){
		for(int i=0;i<3;i++){
			for(int j=0;j<2;j++){
				cin>>a[i][j];
			}
		}
	}
	void display(){
		for(int i=0;i<3;i++){
			for(int j=0;j<2;j++){
				cout<<a[i][j]<<" "<<&a[i]<<endl;
			}
			//the adress of elements in diff rows are contiguous, non uniformly arranged.
		}
	}
};
int main(){
	A ob;
	ob.input();
	ob.display();
}
