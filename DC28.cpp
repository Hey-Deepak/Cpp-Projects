#include <iostream>
using namespace std;
class MyClass
{
public:
  int myMethod(int age);
};
  int MyClass :: myMethod(int age){
    cout << age;
    return 0;
  }
int main()
{
  MyClass myObj;
  myObj.myMethod(21);
  return 0;
}