class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
    if(nums.empty()) return 0;
    priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.end());
        int max_c = 1 , c = 1;
        int last = pq.top();
        pq.pop();
        while(!pq.empty()){
            if(last+1 == pq.top())c++;
            else if(last != pq.top()) c = 1;
            last = pq.top();
            pq.pop();
            max_c = max(max_c , c);
        }
        return max_c;
    }
};
