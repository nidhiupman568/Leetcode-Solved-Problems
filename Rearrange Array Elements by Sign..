/*

    Time Complexity : O(N), As we iterate the array equal to two times. Where N is size of the array(nums).

    Space Complexity: O(N), Array(neg and pos) space.

    Solved using Array.

*/


/***************************************** Approach 1 Code *****************************************/

/*class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans, neg, pos;
        for(auto num : nums){
            if(num > 0){
                pos.push_back(num);
            }
            else if(num < 0){
                neg.push_back(num);
            }
        }
        for(int i=0; i<neg.size(); i++){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        return ans;
    }
};






/*

    Time Complexity : O(N), As we iterate the array only ones. Where N is size of the array(nums).

    Space Complexity: O(1), Constant space. Extra space is only allocated for the Array(ans) of size N, however
    the output does not count towards the space complexity.

    Solved using Array + Two Pointers.

*/


/***************************************** Approach 2 Code *****************************************/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        int positiveElementIndex = 0, negativeElementIndex = 1;

        for(auto num : nums){
            if(num > 0){
                ans[positiveElementIndex] = num;
                positiveElementIndex += 2;
            }
            else if(num < 0){
                ans[negativeElementIndex] = num;
                negativeElementIndex += 2;
            }
        }
        return ans;
    }
};
