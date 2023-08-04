/*

    Time Complexity : O(logN).

    Space Complexity : O(1).
    
    Solved using Bit Manipulation.

*/


/***************************************** Approach 1 *****************************************/

/*class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n != 0){
            count += (n%2);
            n >>= 1;
        }
        return count;
    }
};






/*

    Time Complexity : O(logN).

    Space Complexity : O(1).
    
    Solved using Bit Manipulation.

*/


/***************************************** Approach 2 *****************************************/
/*
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n != 0){
            n &= (n-1);
            count++;
        }
        return count;
    }
};





*/
/*

    Time Complexity : O(logN).

    Space Complexity : O(1).
    
    Solved using Bit Manipulation.

*/


/***************************************** Approach 3 *****************************************/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n != 0){
            int rmsb = n & -n;
            n -= rmsb;
            count++;
        }
        return count;
    }
};
