class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        vector<int> h(26 , 0);
        vector<int> g(26 , 0);
        for(int i = 0 ;i < s.length() ; i++){
            h[s[i]-'a']++;
            g[t[i] - 'a']++;
        }
        for(int i = 0 ; i < 26 ; i++){
            if(h[i] != g[i]) return false;
        }
        return true;
    }
};
