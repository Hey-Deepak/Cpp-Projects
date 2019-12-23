#include<iostream>
using namespace std;
int *findMid(int a[], int lent);

int main(){
    int a[] = {1, 2, 3, 4, 5};
    int len = sizeof(a)/sizeof(a[0]);
    int* mid = findMid(a, len);
    cout << *mid << endl;    
    return 0;
}
int *findMid(int a[], int len){
    return &a[len/2];
}