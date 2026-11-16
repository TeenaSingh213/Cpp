#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 1, 2, 2, 3};
    int left = 0;
    for (int right = left + 1; right < 5; right++)
    {
        if (arr[right] != arr[left])
        {
            left++;
            arr[left] = arr[right];
        }
    }
    cout << arr << endl;
}