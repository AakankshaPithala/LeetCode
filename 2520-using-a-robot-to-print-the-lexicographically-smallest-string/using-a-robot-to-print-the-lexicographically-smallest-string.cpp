class Solution {
public:
    string robotWithString(string s) {
        int n = s.size();
        vector<int> freq(26, 0);

        for (char c : s) {
            freq[c - 'a']++;
        }

        string result;
        stack<char> t;
        int minChar = 0;

        for (char c : s) {
            freq[c - 'a']--;

            t.push(c);

            while (minChar < 26 && freq[minChar] == 0) {
                minChar++;
            }

            while (!t.empty() && (t.top() - 'a') <= minChar) {
                result += t.top();
                t.pop();
            }
        }

        while (!t.empty()) {
            result += t.top();
            t.pop();
        }

        return result;
    }
};
