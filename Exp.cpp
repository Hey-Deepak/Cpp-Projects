#include<iostream>
using namespace std;

int main(){

    char ch;
    cin >> ch;
    
    printf("%d\n", ch);
    if (64 > ch || ch < 91)
    {
        cout << "1" << endl;
    }
    else if( 96 > ch || ch < 123)    
    {
        cout << "0" << endl;
    }else
    {
        cout << "-1" << endl;    // Bug
    }

    vnksnfvsnfsnfsk.fnsfjsfjsjfsljfslfkjsgjslfjsjs
    return 0;
}