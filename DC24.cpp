#include<iostream>
using namespace std;
class MyClass {
    public :
    int age;
    string name;
};
int main(){
    MyClass myAge;
    MyClass myName;
    myAge.age = 21;
    myName.name = "Deepak";
    cout<< myAge.age << " " << myName.name <<endl;
    return 0;
}