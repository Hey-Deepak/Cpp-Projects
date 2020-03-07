#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n ;
    for (int j = 0; j <= 5; j++)
    {
        for (int i = n; i >= j  ; i--)
        {
            cout << "*";
        } 
        printf("\n");
    }
    
    return 0;
}