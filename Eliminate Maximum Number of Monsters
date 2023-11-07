class Solution {
public:
    int eliminateMaximum(std::vector<int>& dist, std::vector<int>& speed) {
        int n = dist.size();  // Number of monsters

        // Convert distances to arrival times (time = distance / speed)
        for (int i = 0; i < n; ++i) {
            dist[i] = std::ceil(static_cast<double>(dist[i]) / speed[i]);
            speed[i] = 0;  // Initialize the "speed" array to 0 for counting monsters arriving at the same time.
        }

        // Count the number of monsters arriving at each minute
        for (int arrivalTime : dist) {
            if (arrivalTime >= n) continue;  // Ignore monsters arriving after the game ends
            speed[arrivalTime] += 1;
        }

        // Calculate the cumulative count of monsters arriving at or before each minute
        for (int i = 1; i < n; ++i) {
            speed[i] += speed[i - 1];

            // If the cumulative count exceeds the current minute, return the maximum number of eliminated monsters
            if (speed[i] > i) {
                return i;
            }
        }

        // If no game loss occurs, return the total number of monsters, as all of them can be eliminated
        return n;
    }
};
