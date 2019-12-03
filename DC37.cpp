#include<iostream>
using namespace std;

class Employee{
    protected:
    int salary;
};
class Programmer: public Employee{
    public:
    int bonus;
    void setSalary(int x){
        salary = x;
    }
    int getSalary(){
        return salary;
    }
};
int main(){
    Programmer myObj;
    myObj.bonus = 20000;
    myObj.setSalary(100000);
    cout << "Salary :- " << myObj.getSalary() << "\nBouns :- " << myObj.bonus <<endl;
    return 0;
}