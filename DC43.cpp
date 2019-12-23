#include<iostream>
using namespace std;
void swap(int*, int*);
int main(){
    int a = 2, b = 4;
    swap(&a, &b);
    cout << a << b << endl;    
    return 0;
}
void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}