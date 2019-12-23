#include<iostream>
using namespace std;
int strcmp(int* pa, int* pb);
int main(){
    int a[5] = {1, 2, 3, 46, 55};
    int b[5] = {1, 2, 42, 4, 55};
    int* pa = a;
    int* pb = b;
    cout << strcmp(a, b) << endl;
 return 0;
}
int strcmp(int* pa, int* pb){
    while (*pb++ == *pa++)
    {
        if (*pa == '\0')
        {
            return 0;
        }
        
    }
    return *pa - *pb;
}