#include<iostream>
using namespace std;

int main(){
    cout<<"Enter Your name :- \n";
    string name ;
    cin>>name;
    cout<<"Name :- "<< name;
    name[3] = 'a';
    cout<<"\nName after Change :- "<< name;
    return 0;
}