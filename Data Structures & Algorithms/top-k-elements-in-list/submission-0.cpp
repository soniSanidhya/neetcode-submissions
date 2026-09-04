class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<pair<int,int>> vec;
        for(auto a : nums){
            mp[a]++;
        }
        for(auto p : mp){
            vec.push_back({p.second , p.first});
        }
        priority_queue<pair<int,int>> pq(vec.begin() , vec.end());
        vector<int> res;
        while(k--){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
