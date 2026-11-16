#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    int a = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < a; i++)
    {
        sum += arr[i];
    }
    cout << "Average: " << sum / a << endl;
}