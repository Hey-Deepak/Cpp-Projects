#include<iostream>
using namespace std;
int main(){
    int i, j, x, res[20][20]={0};
    cout<<"Enter height: "; cin>>x;
    for(i=0 ; i<x ; i++){
        for(j=0 ; j<(2*x-1) ; j++){
            if(i==0 && j==(x-1))
                res[i][j] = 1;
            else if(i>0)
                res[i][j] = res[i-1][j-1] + res[i-1][j+1];
            if(res[i][j]>0)
                cout<<res[i][j];
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
