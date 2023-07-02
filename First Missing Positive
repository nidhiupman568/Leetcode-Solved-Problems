/*public class Solution {
    public int firstMissingPositive(int[] A) {
        int i = 0;
        while(i < A.length){
            if(A[i] == i+1 || A[i] <= 0 || A[i] > A.length) i++;
            else if(A[A[i]-1] != A[i]) swap(A, i, A[i]-1);
            else i++;
        }
        i = 0;
        while(i < A.length && A[i] == i+1) i++;
        return i+1;
    }
    
    private void swap(int[] A, int i, int j){
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
}
*/

class Solution{
    public int firstMissingPositive(int[] nums){
        if(nums.length==0) return 1;
        for(int i=0;i<nums.length;){
            if(nums[i]>nums.length || nums[i]<=0){
                i++;
            }else if(nums[nums[i]-1]==nums[i]){
                i++;
            }else{
                int temp =nums[nums[i]-1];
                nums[nums[i]-1]=nums[i];
                nums[i]=temp;
            }
        }
        int i=0;
        for(i=0;i<nums.length;i++){
            if(nums[i]!=i+1)return i+1;
        }
       return nums[i-1]+1;
    }
}     
            
        
