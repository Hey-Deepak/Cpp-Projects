#include<iostream>
using namespace std;

int main(){
    int array[] = {2, 4, 6, 1, 5};
    int sortedArray[5];
    int j;

    for (int i = 0, J = 0; array[i] != '\0' ; i++, J++)
    {
        if (array[i] <  array[i+1])
        {
            sortedArray[J] = array[i+1];
                cout << j << endl;
        } else
        {
            sortedArray[J] = array[i];
        }
    }
    for (int j = 0; sortedArray[j] != '\0'; j++)
    {
        cout << sortedArray[j] << endl;
    }
    
    return 0;
}