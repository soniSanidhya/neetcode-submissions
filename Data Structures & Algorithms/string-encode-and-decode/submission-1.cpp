class Solution {
   public:
    string encode(vector<string>& strs) {
        string enc = "";
        for (auto str : strs) {
            for (int i = 0; i < str.length(); i++) {
                if (str[i] == '/' || str[i] == '&') {
                    enc = enc + '/';
                }
                enc = enc + str[i];
            }
            enc = enc + '&';
        }
        return enc;
    }

    vector<string> decode(string s) {
        vector<string> res;
        cout<<s;
        string temp = "";
        for (int i = 0; i < s.length(); i++) {
            if(s[i] == '&'){
                res.push_back(temp);
                temp = "";
                continue;
            }
            if (s[i] == '/'){
                i++;
            }
            temp = temp + s[i];
        }
        return res;
    }
};
