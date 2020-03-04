#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n * 2; i++)
    {
        if (i <= n)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cout << "  " ;
            }
            for (int k = 0; k < i; k++)
            {
                cout << "*" ;
            }
            printf("\n");
        }
    }

    return 0;
}