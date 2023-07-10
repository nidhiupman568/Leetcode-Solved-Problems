class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int prev = nums[0], count = 1, pos = 1;
        for (int i = 1; i < nums.size(); i++)
            if (prev != nums[i])
                count = 1, prev = nums[i], nums[pos++] = nums[i];
            else if (count++ < 2)
                nums[pos++] = nums[i];
        return pos;
    }
};
