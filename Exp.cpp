#include<iostream>
using namespace std;
void fun(char *s);
int main(){
    char a[10];

    fun(a);  
    return 0;
}

void fun(char *s){
    gets(s);
    puts(s);
}