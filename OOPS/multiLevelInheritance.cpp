#include<iostream>
using namespace std;


class Animal {

    public:
    int age;
    int weight;


    public:
    void speak() {
        cout << "Animal Speaking" << endl;
    }
};

class Dog: public Animal {

};

class GermanShepherd: public Dog {
    public:
    // void speak(){
    //     cout<<"German Shephard Speaking"<<endl;
    // }
};

int main() {

    GermanShepherd g;
    g.speak();


    return 0;
}