class Solution {
public:
    int findMin(vector<int>& n) {
        int s=0,l=n.size();
        int e =l-1;
        while(s<e){
            int m = s+(e-s)/2;
            if(n[m] > n[e]) s=m+1;          // left side has small values (rotated array)
            else if(n[m] < n[e]) e=m;       // right side has small value (not rotated)
            else e--;                       // mid value equal to end move towards small
        }
        return n[s];
    }
};
