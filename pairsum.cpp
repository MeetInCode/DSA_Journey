#include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum(const vector<int> &nums, int target)
{
    vector<int> ans;
    int n = nums.size();

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int pairsum = nums[i] + nums[j];
        if (pairsum > target)
        {
            j--;
        }
        else if (pairsum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            i++;
            j--;
            continue;
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {11, 23, 31, 43, 55};
    int target = 66;

    vector<int> ans = pairSum(nums, target);

    for (int vals : ans)
    {
        cout << vals << " ";
    }

    return 0;
}
