#include <iostream>
using namespace std;
 
int main()
{
    int arr[] = { 6, 3, 5, 2, 8 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    int elem = 2;
 
    int i = 0;
    while (i < n)
    {
        if (arr[i] == elem) {
            break;
        }
        i++;
    }
 
    if (i < n)
    {
        cout << "Element " << elem << " is present at index " << i
             << " in the given array";
    }
    else {
        cout << "-1";
    }
 
    return 0;
}
