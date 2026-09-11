class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int p1 = 0;
        int maxi = 0;

        unordered_set<char> sub;

        for (int j = 0; j < s.length(); j++) {

            while (sub.count(s[j])) {
                sub.erase(s[p1]);
                p1++;
            }

            sub.insert(s[j]);

            maxi = max(maxi, j - p1 + 1);
        }

        return maxi;
    }
};