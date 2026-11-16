#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 3, 4, 5, 1};
    int max = arr[0];
    int second_max = arr[0];
    for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] > max)
        {
            second_max = max;
            max = arr[i];
        }
        else if (arr[i] > second_max && arr[i] != max)
        {
            second_max = arr[i];
        }
    }
    cout << "Second largest element is: " << second_max << endl;
    return 0;
}