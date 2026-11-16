#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int min = arr[0];
    for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Min: " << min << endl;
}