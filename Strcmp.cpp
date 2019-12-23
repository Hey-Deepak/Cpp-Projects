#include<iostream>
using namespace std;
int strcmp(int* pa, int* pb);
int main(){
    int a[5] = {'a', 'b', 'c', 'd'};
    int b[5] = {'a', 'b', 'c', 'd'};
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
            return 1;
        }
        
    }
    return *pa - *pb;
}