class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>triangle;
        vector<int>prevRow;
        for(int i = 0;i<numRows;i++){
            vector<int>row;
            for(int j =0;j<i+1;j++){
                //edge digits
                if(j==0 or j==(i+1)-1)
                    row.push_back(1);
                else
                    row.push_back(prevRow[j-1]+prevRow[j]);
            }
            triangle.push_back(row);
            prevRow = row;
        }
        return triangle;
    }
};
