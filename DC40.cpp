#include <iostream>
using namespace std;

int main()
{
    int n1;
    int n2;
    int matrix1[100][100];
    int matrix2[100][100];

    cout << "Enter Hight of N * N matrix1" << endl;
    cin >> n1;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    
    cout << "Enter Hight of N * N matrix2" << endl;
    cin >> n2;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout << matrix1[i][j] + matrix2[i][j] << " ";
        }
        printf("\n");
    }

    return 0;
}