#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = sizeof(arr) / sizeof(arr[0]) - 1; i >= 0; i--)
    {
        sum += arr[i];
    }
    cout << "Sum: " << sum << endl;
}