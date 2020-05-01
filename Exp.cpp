#include <bits/stdc++.h> 
using namespace std;

int main(){
    int array[] = {1, 4, 3, 5, 6, 7, 2, 3, 4, 5, 6, 7, 8, 9};
    int temp = 1, count = 1;
    int *p = array;
    int *q = &array[1];

    for (int i = 0; array[i] ; i++)
    {
        *p = array[i];
        *q = array[i  + 1];
        if ((*q) == ++(*p))
        {   
            count++;
        } else
        {
            if(temp < count){
                temp = count;
                count = 0;
            }
        }
    }
    cout << ((count > temp) ? count : temp)<< endl;

    return 0;
}
