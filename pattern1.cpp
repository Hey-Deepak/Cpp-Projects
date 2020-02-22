#include<iostream>
using namespace std;

int main(){
    int n = 10;
    for (int i = 1, j = 1; i < 20, j < 10; i++, j++)
    {   
        if (i % 2 == 0)
        {
            cout << " ";
        }else if (i % 2 ==1)
        {
            
            cout << j--;
        }
        
        if (i % 3 == 0)
        {
            printf("\n");
        }
        
    }
        
    return 0;
}