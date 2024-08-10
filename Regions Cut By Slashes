class DisjointSet {
private:
    vector<int> parent, rank;
    int count;

public:
    DisjointSet(int n) : parent(n), rank(n, 0), count(n) {
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void unite(int x, int y) {
        int px = find(x), py = find(y);
        if (px == py) return;
        if (rank[px] < rank[py]) {
            parent[px] = py;
        } else if (rank[px] > rank[py]) {
            parent[py] = px;
        } else {
            parent[py] = px;
            rank[px]++;
        }
        count--;
    }

    int getCount() {
        return count;
    }
};

class Solution {
public:
    int regionsBySlashes(vector<string>& grid) {
        int n = grid.size();
        DisjointSet ds(4 * n * n);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int cell = 4 * (i * n + j);
                if (grid[i][j] != '/') {
                    ds.unite(cell, cell + 1);
                    ds.unite(cell + 2, cell + 3);
                }
                if (grid[i][j] != '\\') {
                    ds.unite(cell, cell + 3);
                    ds.unite(cell + 1, cell + 2);
                }
                if (i > 0) ds.unite(cell, cell - 4 * n + 2);
                if (j > 0) ds.unite(cell + 3, cell - 3);
            }
        }

        return ds.getCount();
    }
};
