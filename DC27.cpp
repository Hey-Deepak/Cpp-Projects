#include <iostream>
using namespace std;
class MyClass
{
public:
  void myMethod();
};
  void MyClass :: myMethod(){
    cout << "Hello World!";
  }
int main()
{
  MyClass myObj;
  myObj.myMethod();
  return 0;
}