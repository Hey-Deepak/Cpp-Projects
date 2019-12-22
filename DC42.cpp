#include<iostream>
using namespace std;
void swap(int x,int y);

int main(){
    int a = 4, b = 8;
    swap(a, b);
    cout << a << b << endl;
    return 0;
}
void swap(int x,int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << x << y << endl;
    
}