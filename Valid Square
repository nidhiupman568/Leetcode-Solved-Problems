class Solution {
public:
    double d(vector<int>& p1, vector<int>& p2) {
        return pow(pow(p1[0] - p2[0], 2) + pow(p1[1] - p2[1], 2), 0.5);
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        // support variables
        double d0, d1, d2, d3;
        vector<vector<int>> pts = {p1, p2, p3, p4};
        sort(begin(pts), end(pts));
        // computing the distances between ordered points
        d0 = d(pts[0], pts[1]), d1 = d(pts[0], pts[2]), d2 = d(pts[0], pts[3]), d3 = d(pts[1], pts[2]);
        // checking if sides are non-0 and if sides and diagonals are equal
        return d0 && d2 && d0 == d1 && d2 == d3;
    }
};
