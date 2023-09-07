#include<iostream>
using namespace std;
class base{
	public:
		virtual void show(){
			cout<<"Base\n";
		}
		virtual ~base(){
			cout<<"destructing base"<<endl;
		}
};
class derived: public base{
	public:
		void show(){
			cout<<"derived\n";
		}
		~derived(){
			cout<<"destructing derived"<<endl;
		}
};
int main(){
	base *pb=new derived();
	pb->show();
	delete(pb);
}
//virtual destructor allows both the destructors to work
//first the derived class destructor runs
