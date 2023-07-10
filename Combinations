class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> output_arr;
        vector<int> tempList;
        backtrack(output_arr, tempList, k, n, 1);
        return output_arr;
    }
    void backtrack(vector<vector<int>>&output_arr, vector<int>&tempList, int listSize, int maxNumber, int startNumber){
        if(tempList.size()==listSize){
            output_arr.push_back(tempList);
        }
        else{
            for(int i=startNumber; i<=maxNumber; i++){
                tempList.push_back(i);
                backtrack(output_arr, tempList, listSize, maxNumber, i+1);
                tempList.erase(tempList.end()-1);
            }
        }
    }
};
