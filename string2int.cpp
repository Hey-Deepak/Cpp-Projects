#include<iostream>
using namespace std;

int main(){
    char a[] = "123";
    int b[10];
    int j = 0, i = 0;
    
    while (a[i] != '\0')
    {
        b[i] = a[i] - 48;
        i++;
    }
    
    while (b[j] != '\0')
    {
        cout << b[j] << endl;
        j++;
    }

    int sum = 0;
    for (int k = 0; b[k] != '\0'; k++)
    {
        sum = sum * 10 + b[k];  // We can Calculate Sum without knowing Length of array or Link-List. 
                                //sum = (((((1)*10 + 2)*10 +3)*10 + nextIndexElement)*10 ....)))
    }
    cout << sum << endl;
    return 0;
}