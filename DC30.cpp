#include<iostream>
using namespace std;
class Myclass {
    public :
    int age;
    string name;
    Myclass(int x, string y){
        age = x;
        name = y;
    }
};
int main(){
    Myclass myObj(21,"Deepak");
    cout<<"Name : - "<<myObj.name <<endl;
    cout<<"Age : - "<<myObj.age <<endl;
    return 0;
}