/*

    Time Complexity : O((N*M)*(N+M)), Where N is the number of row and M is number of column of matrix. Here
    nested loops creates the time complexity. O(N*M) for traversing through each element and (N+M) for traversing
    to row and column of elements having value 0.

    Space Complexity : O(N*M), visited matrix space.

    Solved using Matrix with Extra space.

*/


/***************************************** Approach 1 Code *****************************************/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> visited = matrix;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    for(int k=0; k<m; k++){
                        visited[i][k] = 0;
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    for(int k=0; k<n; k++){
                        visited[k][j] = 0;
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                matrix[i][j] = visited[i][j];
            }
        }
    }
};






/*

    Time Complexity : O((N*M)*(N+M)), Where N is the number of row and M is number of column of matrix. Here
    nested loops creates the time complexity. O(N*M) for traversing through each element and (N+M)for traversing
    to row and column of elements having value 0.

    Space Complexity : O(1), Constant space.

    Solved using Matrix.

*/


/***************************************** Approach 2 Code *****************************************/
/*
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    for(int k=0; k<m; k++){
                        if(matrix[i][k] != 0){
                            matrix[i][k] = -9999;
                        }
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    for(int k=0; k<n; k++){
                        if(matrix[k][j] != 0){
                            matrix[k][j] = -9999;
                        }
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == -9999){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

*/




/*

    Time Complexity : O(N*M), Where N is the number of row and M is number of column of matrix. Here two nested 
    loops creates the time complexity.

    Space Complexity : O(N+M), Here Unordered set(setRows and setColumn) creates the space complexity. O(N) for
    storing the row indexs and O(M) for storing the column indexs.

    Solved using Matrix + Hash Table.

*/


/***************************************** Approach 3 Code *****************************************/
/*
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        unordered_set<int> setRows; 
        unordered_set<int> setColumns; 
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    setRows.insert(i);
                    setColumns.insert(j);
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(setRows.count(i) > 0 || setColumns.count(j) > 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};




*/

/*

    Time Complexity : O(N*M), Where N is the number of row and M is number of column of matrix. Here two nested 
    loops creates the time complexity.

    Space Complexity : O(1), Constant space.

    Solved using Matrix.

*/


/***************************************** Approach 4 Code *****************************************/
/*
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        bool flag1 = false, flag2 = false;
        for(int i=0; i<n; i++){
            if(matrix[i][0] == 0){
                flag1 = true;
            }
        }
        for(int j=0; j<m; j++){
            if(matrix[0][j] == 0){
                flag2 = true;
            }
        }
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        if(flag1 == true){
            for(int i=0; i<n; i++){
                matrix[i][0] = 0;
            }
        }
        if(flag2 == true){
            for(int j=0; j<m; j++){
                matrix[0][j] = 0;
            }
        }
    }
};
*/
