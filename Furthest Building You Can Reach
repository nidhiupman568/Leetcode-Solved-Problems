class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n=heights.size();
        
        //Min-Heap to keep track of k largest height differences
        priority_queue<int, vector<int>, greater<int>> pq;
        
        
        for(int i=1;i<n;i++) {
            //Difference of heights btn current and prev buildings
            int diff = heights[i]-heights[i-1];
            
            //If difference is greater than 0, we need ladder or bricks...
            if(diff>0) {
                /**
                We push the difference in our priority queue,
                if the size of priority queue becomes greater than number of ladders, we know that we have to use bricks...
                So we remove the least element from our priority queue and deduct the number of bricks from it...
                PS: Least Element will be at top of our priority queue(Min-Heap)
                */
                pq.push(diff);
                if(pq.size()>ladders) {
                    bricks-=pq.top();
                    pq.pop();
                }
                
                //If at any-instance, number of bricks goes below 0, we know that we cannot traverse till this building and hence we return index of prev building
                if(bricks<0) return i-1;
            }
        }
        
        //If we can traverse through all the buildings, we simply return the last index...
        return n-1;
    }
};
