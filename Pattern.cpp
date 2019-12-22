#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    for (int i = 0; i < 5; i++){
        for (int k = i; k < 4; k++)
        {
            cout << "  ";
        }
    
        for (int j = 0; j <= i; j++)
        {
            cout << count;
            printf("   ");
            count++;    
        }
        printf("\n");
    }

    return 0;
}

/*   Output :- 

        1
      2   3
    4   5   6
  7   8   9   10
11   12   13   14   15 */