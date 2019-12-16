#include <iostream>
using namespace std;

int main()
{
    int n1, m1, n2, m2, j, sum = 0;
    int matrix1[100][100];
    int matrix2[100][100];
    int matrix3[100][100];

    cout << "Enter Rows & column of matrix1" << endl;
    scanf("%d %d", &n1, &m1);
    cout << "Enter Metrix1 :-" << endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    
    cout << "Enter Rows & column of matrix2" << endl;
    scanf("%d %d", &n2, &m2);
    cout << "Enter Metrix2 :-" << endl;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    cout << "Result Metrix :- " << endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            sum = matrix1[i][j] * matrix2[i][j];
            matrix3[i][j] = sum;
            cout << sum << " ";
        }
        printf("\n");
    }

    return 0;
}