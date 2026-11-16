#include <iostream>
#include <vector>
using namespace std;
class Sol
{
public:
    void SortSq(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> result(n);
        int left = 0;
        int right = n - 1;
        int position = n - 1;

        while (left <= right)
        {
            if (abs(nums[left]) >= abs(nums[right]))
            {
                result[position] = nums[left] * nums[left];
                left++;
            }
            else
            {
                result[position] = nums[right] * nums[right];
                right--;
            }
            position--;
        }

        nums = result;
    }
};

int main()
{
    vector<int> nums = {-4, -1, 0, 3, 10};
    Sol obj;
    obj.SortSq(nums);

    for (int x : nums)
        cout << x << " ";
    cout << endl;

    return 0;
}