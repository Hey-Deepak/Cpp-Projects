#include<iostream>
using namespace std;

int main(){
    int flag = 0;
    int arr1[] = {1, 2, 3, 4, 5,6, 7, 8, 88};
    int arr2[] = {1, 2, 3, 4, 5,6, 7, 8, 9, 0};
    for (int i = 0; i < 10; i++)
    {   
        if (arr2[i] == arr1[i])
        {
            flag = 1;
        } else
        {
            flag = 0;
        }
    }

    if (flag == 1)
    {
        cout << "Equal" << endl;
    } else
    {
        cout << "Unequal" << endl;  
    }
    
    
    
    return 0;
}