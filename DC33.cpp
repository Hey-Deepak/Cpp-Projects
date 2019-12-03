#include<iostream>
using namespace std;
class Salary{
    private :
    int salary;
    public :
    void set(int x){
        salary = x;
    }
    int get(){
        return salary;
    }
};
int main(){
    Salary myObj;
    myObj.set(20000);
    cout<<"Salary :- " << myObj.get()<<endl;
    return 0;
}