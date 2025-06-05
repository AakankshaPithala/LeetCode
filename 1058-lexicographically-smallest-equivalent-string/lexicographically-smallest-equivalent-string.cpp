class Solution {
public:
    int find(int x, vector<int>& parent) {
        if (x != parent[x]) {
            parent[x] = find(parent[x], parent); // Path compression
        }
        return parent[x];
    }

    void unite(int x, int y, vector<int>& parent) {
        int px = find(x, parent);
        int py = find(y, parent);
        if (px == py) return;
        
        if (px < py) {
            parent[py] = px;
        } else {
            parent[px] = py;
        }
    }

    string smallestEquivalentString(string s1, string s2, string baseStr) {
        vector<int> parent(26);
        for (int i = 0; i < 26; ++i) {
            parent[i] = i; 
        }

        for (int i = 0; i < s1.size(); ++i) {
            unite(s1[i] - 'a', s2[i] - 'a', parent);
        }

        string result;
        for (char ch : baseStr) {
            int smallest = find(ch - 'a', parent);
            result += (char)(smallest + 'a');
        }

        return result;
    }
};
