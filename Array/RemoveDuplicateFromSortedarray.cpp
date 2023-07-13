#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0 || n == 1)
        {
            return 1;
        }
        int j = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] != nums[i + 1])
            {
                nums[j] = nums[i];
                j++;
            }
        }
        nums[j++] = nums[n - 1];
        return j;
    }
}
