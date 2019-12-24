#include<iostream>
using namespace std;
int strcmp(int* pa, int* pb);
int main(){
    int a[5] = {'a', 'b', 'c', 'u'};
    int b[5] = {'a', 'b', 'c', 'd'};
    int* pa = a;
    int* pb = b;
    cout << strcmp(a, b) << endl;
    return 0;
}
int strcmp(int* pa, int* pb){
    
    while (*pb++ == *pa++)
    {
        if (*pb == '\0')
        {
            return 1;
        }
        
    }
    cout << *pb << endl;
    cout << *pa << endl;
    return *(--pa) - *(--pb);
}