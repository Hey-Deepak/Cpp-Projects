#include <iostream>
using namespace std;

int main()
{
    int n1rows, n2column, m1rows, m2column, j, sum = 0;
    int matrix1[100][100];
    int matrix2[100][100];
    int matrix3[100][100];

    cout << "Enter Rows & column of matrix1" << endl;
    scanf("%d %d", &n1rows, &n2column);
    cout << "Enter Metrix1 :-" << endl;
    for (int i = 0; i < n1rows; i++)
    {
        for (int j = 0; j < n1rows; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    
    cout << "Enter Rows & column of matrix2" << endl;
    scanf("%d %d", &m1rows, &m2column);
    cout << "Enter Metrix2 :-" << endl;
    for (int i = 0; i < m1rows; i++)
    {
        for (int j = 0; j < m2column; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    cout << "Result Metrix :- " << endl;
    for (int i = 0; i < n1rows; i++)
    {
        for (int j = 0; j < m2column; j++)
        {
            for (int k = 0; k < m2column ; k++)
            {
                sum += matrix1[i][k] * matrix2[k][j];
            }
        }
        matrix3[i][j] = sum;
        cout << matrix3[i][j] << endl;
        printf("\n");
    }

    return 0;
}