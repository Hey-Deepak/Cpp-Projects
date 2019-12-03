#include<iostream>
using namespace std;
class Myclass{
    public:
    int age;
    private:
    string name;
};
int main(){
    Myclass myObj;
    myObj.age = 21;
    myObj.name = "HeyDeepak"; // give an error;
    cout<<"Name : - "<<myObj.name <<endl;
    cout<<"Age : - "<<myObj.age <<endl;
    return 0;
}