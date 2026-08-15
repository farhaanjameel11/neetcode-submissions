class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map <char,int> mp;

        for(auto x : s){
            mp[x]++;

        }
           for(auto x : t){
            mp[x]--;
            if(mp[x]<0){
                return false;
            }
            
        }
        return true;
    }
};
