class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> mp;
        vector<vector<string>> res;
        for(string str : strs){
            string count(26,'0');
            for(char s : str){
                count[s-'a']++;
            }
            mp[count].push_back(str);
        }

        for(auto p : mp){
            res.push_back(p.second);
        }
        return res;
    }
};
