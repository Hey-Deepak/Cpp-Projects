#include<iostream>
using namespace std;

int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int* p = &a[0];
    cout << *p << endl;
    p++;
    cout << *p << endl;
    (p+2);
    p++;
    cout << *(p - 2) << endl;

    return 0;
}