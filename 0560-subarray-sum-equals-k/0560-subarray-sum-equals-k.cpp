class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int n = nums.size();
        unordered_map<int, int> m;
        int sum = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + nums[i];
            if (sum == k) cnt++;
            if (m.find(sum - k) != m.end()) {
                cnt = cnt + m[sum - k];
            }
            m[sum]++;
        }
        return cnt;
    }
};