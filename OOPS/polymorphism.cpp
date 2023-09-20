#include<iostream>
using namespace std;

class A {

    public:
    void sayHello() {
        cout << "Hello Tushar" << endl;
    }
    
    int sayHello(char name) {
        cout << "Hello int() func" << endl;
        return 1;
    }

    void sayHello(string name) {
        cout << "Hello void() func" << name  << endl;
    }

};

class B {
    public:
    int a;
    int b;

    public: 
    int add() {
        return a+b;
    }

    void operator+ (B &obj) {
        int value1 = this -> a;
        int value2 = obj.a;
        cout << "output " << value2 - value1 << endl; 
    }

    int operator- (B &obj){
        
        cout << "- fuc(called)"<< endl; 
        return -1;
    }

    void operator() () {
        cout << "Bracket " << this->a << endl;
    }

};

class Animal {
    public:
    void speak() {
        cout << "Speaking "<< endl;
    }
};

class Dog: public Animal {

    public:
    void speak() {
        cout << "Barking " << endl;
    }


};



int main() {

    Dog obj;
    obj.speak();


    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;
    cout<< "Output for - operator: "<<obj1-obj2<<endl;
    obj1();

    A obj3;
    obj3.sayHello("aa");
    


    return 0;
}