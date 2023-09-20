#include<iostream>
using namespace std;

/*
Encapsulation is making all the data members private and process of grouping of all the data members and functions in a class. 
SO they are protected and accessible within the class only.
to make the class read-only.
for enhanced security
*/

class Student {

    private:
        string name;
        int age;
        int height;

    public:
    int getAge() {
        return this->age;
    }
};

int main() {

    Student first;
    cout<< first.getAge();
    return 0;
}