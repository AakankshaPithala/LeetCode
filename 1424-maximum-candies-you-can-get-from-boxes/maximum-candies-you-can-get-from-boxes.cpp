class Solution {
public:
    int maxCandies(vector<int>& status, vector<int>& candies, vector<vector<int>>& keys, vector<vector<int>>& containedBoxes, vector<int>& initialBoxes) {
        int n = status.size();
        vector<bool> hasBox(n, false);      
        vector<bool> isOpen(n, false);    
        vector<bool> hasKey(n, false);     
        
        queue<int> q;

       
        for (int box : initialBoxes) {
            hasBox[box] = true;
            if (status[box] == 1) {
                q.push(box);
                isOpen[box] = true;
            }
        }

        int totalCandies = 0;

        while (!q.empty()) {
            int box = q.front();
            q.pop();

            totalCandies += candies[box];

            for (int key : keys[box]) {
                if (!hasKey[key]) {
                    hasKey[key] = true;
                    if (hasBox[key] && !isOpen[key]) {
                        q.push(key);
                        isOpen[key] = true;
                    }
                }
            }

            for (int contained : containedBoxes[box]) {
                if (!hasBox[contained]) {
                    hasBox[contained] = true;
                }
                if ((status[contained] == 1 || hasKey[contained]) && !isOpen[contained]) {
                    q.push(contained);
                    isOpen[contained] = true;
                }
            }
        }

        return totalCandies;
    }
};