#include<iostream>
using namespace std;

int main(){
    int input, remender, rev = 0, testCase;
    cin >> testCase;

    for (int i = 0; i < testCase; i++)
    {
        cin >> input ;
        while (input != 0)
        {
            remender = input % 10;
            input = input / 10;
            rev = rev * 10 + remender;
        }
        printf("%d\n", rev);
        rev = 0;
    }
    return 0;
}