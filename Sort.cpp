// Bubble sorting of an array
#include <iostream>
using namespace std;
int main()
{
   int n;
   cout << "Enter the size of array" << endl;
   cin >> n;
   int arr[n], i, j, t;
   cout << "Enter the array elements" << endl;
   for (i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   cout << "Sorted array is " << endl;
   for (i = 0; i < n - 1; i++)
   {
      for (j = i + 1; j < n; j++)
      {
         if (arr[i] > arr[j])
         {
            t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
         }
      }
   }
   for (i = 0; i < n; i++)
   {
      cout << arr[i] << endl;
   }
   return 0;
}
