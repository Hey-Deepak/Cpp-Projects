#include <iostream>
using namespace std;

int main()
{
    int n;
    int matrix[100][100];

    cout << "Enter Hight of N * N matrix" << endl;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        printf("\n");
    }

    return 0;
}