class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0,j=0;
        for(int i=1;i<nums.size();i++){
			if(nums[i]!=nums[i-1]){  //if number is not equal to previous then we need one more step so we increase j
                j++;
            }
            ans+=j; //count or every number present in array
        }
        return  ans;
    }
};
