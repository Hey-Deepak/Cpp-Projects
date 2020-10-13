#include<iostream>
#include<array>

using namespace std;

int main(){
    array<char,3> arr[] = {'A', 'B', 'C'};
    for (int i = 0; i < arr.size(); i++)
    {
        printf("%d\n", arr[i] - 55);
    }

    printf("Heelo");
        
    return 0;
}