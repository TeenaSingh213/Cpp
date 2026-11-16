#include <iostream>
#include <vector>
using namespace std;
class Duplicate
{
public:
    int removeDuplicate(vector<int> &num)
    {
        int left = 0;
        for (int right = 1; right < num.size(); right++)
        {
            if (num[right] != num[left])
            {
                left++;
                num[left] = num[right];
            }
        }
        return left + 1;
    }
};
int main()
{
    vector<int> num = {1, 1, 2, 2, 3};
    Duplicate obj;
    int newLength = obj.removeDuplicate(num);
    cout << "New length: " << newLength << endl;
    cout << "Array: ";
    for (int i = 0; i < newLength; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}