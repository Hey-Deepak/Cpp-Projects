#include<iostream>
using namespace std;
int myFunction(int x, int y);
double myFunction(double x, double y);
int main(){
    cout<<"Int :-"<<myFunction(5 , 4)<<endl;
    cout<<"Double :-"<<myFunction(5.555 , 4.555)<<endl;
    return 0;
}
int myFunction(int x, int y){
    return (x + y);
}
double myFunction(double x, double y){
    return (x + y);
}