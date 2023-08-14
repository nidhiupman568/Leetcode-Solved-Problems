/*

    Time Complexity : O(logN).

    Space Complexity : O(logN).
    
    Solved using Recursive Approach.

*/


/***************************************** Approach 1 *****************************************/

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0){
            return false;
        }
        else if(n==1){
            return true;
        }
        return n%3==0 && isPowerOfThree(n/3);  
    }
};




/*

/*

    Time Complexity : O(logN).

    Space Complexity : O(1).
    
    Solved using Iterative Approach.

*/


/***************************************** Approach 2 *****************************************/
/*
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0){
            return false;
        }
        while(n%3 == 0){
            n /= 3;
        }
        return n==1;  
    }
};






/*

    Time complexity : O(1). We are only doing one operation.

    Space complexity : O(1). We are not using any additional memory.

    Solved using Math.

*/

//class Solution {
//public:
  //  bool isPowerOfThree(int n) {
    //    return n > 0 && 1162261467 % n == 0;
    //}
//};*/

//*/
