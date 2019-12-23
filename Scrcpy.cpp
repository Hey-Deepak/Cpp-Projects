#include<iostream>
using namespace std;
void strcpy(int* pa, int* pb);
int main(){
    int a[5] = {1, 2, 3, 4, 55};
    int b[5];
    int* pa = a;
    int* pb = b;
    strcpy(a, b);
    cout << b[4] << endl;
 return 0;
}
void strcpy(int* pa, int* pb){
    while (*pb++ = *pa++)
    {
        ;
    }
    
}