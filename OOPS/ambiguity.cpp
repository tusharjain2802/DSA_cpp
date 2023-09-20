#include<iostream>
using namespace std;

class A {
    public:
    A(){
        cout<<"A constructor"<<endl;
    }
    ~A(){
        cout<<"A Destructor"<<endl;
    }
    void func() {
        cout << " I am A" << endl;
    }
};

class B {
    public:
    B(){
        cout<<"B constructor"<<endl;
    }
    ~B(){
        cout<<"B Destructor"<<endl;
    }
    void func() {
        cout << " I am B" << endl;
    }
};

class C: public B, public A {
    public:
    C(){
        cout<<"C constructor"<<endl;
    }
    ~C(){
        cout<<"C Destructor"<<endl;
    }

};

int main() {

    C obj;
    //obj.func();
    //this gives compile error

    obj.A::func() ;
    obj.B::func();

    return 0;
}