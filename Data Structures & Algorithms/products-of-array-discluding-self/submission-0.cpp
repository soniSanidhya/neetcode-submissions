class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count = 0;
        int multy = 1;
        for(auto a : nums){
            if(a == 0){
                count++;
            }
            if(count > 1) return vector<int>(nums.size() , 0);
            if(a != 0){
                multy *= a;
            }
        }
        vector<int> res;
        for(auto a : nums){
            if(count > 0){
                if(a == 0)
                res.push_back(multy);
                else
                res.push_back(0);
            }else{
                res.push_back(multy/a);
            }
        }
        return res;
    }
};
