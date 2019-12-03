#include<iostream>
using namespace std;

class A{
    public:
    void function1(){
        cout << "Hey-Deepak"<< endl;
    }
};
class B {
    public:
    void function2(){
        cout << "Deepak"<< endl;
    }
};
class C : public B, public A{
};

int main(){
    C myObj;
    myObj.function1();
    myObj.function2();
    return 0;
}