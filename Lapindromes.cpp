#include<bits/stdc++.h>
using namespace std;

int main(){
    int testCase, middel; 
    string str, strFirst, strLast;
    cin >> testCase;
    while (testCase--)
    {
        cin >> str ;
        middel = str.length() / 2;
        strFirst = str.substr(0, middel);
        if (str.length() % 2 == 0)
        {
            strLast = str.substr(middel, str.length() - 1);
        } else
        {
            strLast = str.substr(middel + 1, str.length() - 1);
        }
        sort(strFirst.begin(), strFirst.end());
        sort(strLast.begin(), strLast.end());
        if (strFirst == strLast)
        {
            printf("YES\n");
        } else
        {
            printf("NO\n");
        }
    }
    
    return 0;
}