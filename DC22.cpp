#include<iostream>
using namespace std;
void myFunction(string name);
int main(){
    myFunction("Deepak");    
    myFunction("Choudhary");    
    myFunction(":-)");    
    return 0;
}
void myFunction(string name) {
    cout<<"I am " << name << endl;
}