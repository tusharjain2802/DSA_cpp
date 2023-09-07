#include <iostream>

using namespace std;
class Donor{
	public:
    void display(){
    int age;
    float height,weight;
    char name[20],gender[10],bloodgroup[10];
    cout<<"Enter the donor details"<<endl;
    cout<<"Enter the name :"<<endl;
    cin>>name;
    cout<<"Enter the age :"<<endl;
    cin>>age;
    cout<<"Enter the height :"<<endl;
    cin>>height;
    cout<<"Enter the weight :"<<endl;
    cin>>weight;
    cout<<"Enter the gender :"<<endl;
    cin>>gender;
    cout<<"Enter the blood group :"<<endl;
    cin>>bloodgroup;
    cout<<"Donor details are :"<<endl<<"Name :"<<name<<endl<<"Age :"<<age<<endl<<"height :"<<height<<endl<<"weight :"<<weight<<endl<<"Gender :"<<gender<<endl<<"Blood Group :"<<bloodgroup;                                                                
}
};
int main(){
    Donor ob;
    ob.display();
}
