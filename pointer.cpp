#include<iostream>
using namespace std;

int main(){
    int a[10] = {2, 4, 5,};
    int *p = &a[2];
    ++p[3];
    cout << *p << endl;    
    return 0;
}