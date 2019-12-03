#include<iostream>
using namespace std;

class A{
    public:
    void function(){
        cout << "Hey-Deepak"<< endl;
    }
};
class B : public A {
};
class C : public B {
};

int main(){
    C myObj;
    myObj.function();
    return 0;
}