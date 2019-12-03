#include<iostream>
using namespace std;
class Vehicle{
    public:
    string brand = "Ford";
    void honk(){
        cout<<"Poooo, Poooo..."<<endl;
    };
};
class Car : public Vehicle{
    public:
    string model = "Mustang";
};
int main(){
    Car myObj;
    myObj.honk();
    cout<< myObj.brand << " " << myObj.model << endl;
    return 0;
}