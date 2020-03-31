#include<bits/stdc++.h>
using namespace std;

int main(){
    int val=3;
    int *ptr=&val;
    
    printf("%d %d", *ptr, ++val) ;
    return 0;
}