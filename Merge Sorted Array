/*

    Time Complexity : O(MlogM), Sorting the array(nums1) costs O(MlogM). Where M is the size of the
    Array(nums1).

    Space Complexity : O(1), Constant Space. 

    Solved using Array + Sorting.

*/


/***************************************** Approach 1 *****************************************/

/*
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0; i<n; i++){
            nums1[m+i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }
};

*/





/*

    Time Complexity : O(N+M), Because we iterate N+M times for both the Array(nums1 and nums2). Where
    M is the number of elements in Array(nums1) and N is the number of elements in Array(nums2).

    Space Complexity : O(1), Constant Space. 

    Solved using Array + Two Pointers. 

*/


/***************************************** Approach 2 *****************************************/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                i--; k--;
            }
            else{
                nums1[k] = nums2[j];
                j--; k--;
            }
        }
        while(j>=0){
            nums1[k] = nums2[j];
            j--; k--;
        }
    }
};
