#include<iostream>
using namespace std;
void swap(int &x, int &y);
int main(){
    int first = 10, second = 20;
    cout<<"Before Swap:-"<<endl;
    cout<<first << ", " << second <<endl;
    cout<<"Aftre Swap:-"<<endl;
    swap(first,second);
    cout<<first << ", " << second <<endl;
    return 0;
}
void swap(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}