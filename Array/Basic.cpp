#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of array at index " << i << ": ";
        cin >> arr[i];
    }

    cout << "The values of the array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
