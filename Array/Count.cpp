#include <iostream>
using namespace std;
int main()
{
    int ev = 0;
    int od = 0;
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] % 2 == 0)
        {
            ev++;
        }
        else
        {
            od++;
        }
    }
    cout << "Even: " << ev << endl;
    cout << "Odd: " << od << endl;
}