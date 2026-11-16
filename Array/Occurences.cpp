#include <iostream>
using namespace std;
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 2, 3, 4};
    int target = 2;
    int count = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
    }
}