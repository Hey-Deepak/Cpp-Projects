#include <iostream>
using namespace std;
int numberOfBits(unsigned int);
int main()
{
    int numberOfBit = 0, x =15;
    numberOfBit = numberOfBits(x);
    cout << numberOfBit;
    return 0;
}

int numberOfBits(unsigned int x){
        int b;
        for(b=0; x!=0; x>>=1){
            if(x&1){
              b++;
            }
        }
        return b;
    }
