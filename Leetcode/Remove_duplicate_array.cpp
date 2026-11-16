#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Zero
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int left = 0;
        for (int right = 1; right < nums.size(); right++)
        {
            if (nums[right] != 0)
            {
                swap(nums[left], nums[right]);
                left++;
            }
        }
    }
};

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    Zero obj;
    obj.moveZeroes(nums);

    for (int x : nums)
        cout << x << " ";
    cout << endl;

    return 0;
}