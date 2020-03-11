#include <iostream>
using namespace std;
int main()
{
    int i, j, k, n, l, m;
    cout << "Enter the number of rows" << endl;
    cin >> n;

    for (i = 1; i < n*2; i++)
    {
        if(i <=n ) {
        for (k = 1; k <= n-i; k++)        
            cout << "  ";
        for (j = 1; j <= i; j++)
           cout << "*";
        cout << endl; 
        } else {
          for (l = n+1; l <= i; l++)
            printf("  ");
          for (m = n*2 ; m-i >=1; m--)
            printf("*");
         cout << endl; 
        }
    }
    return 0;
  }
