class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<int> answer;
        for (int i=0; i < nums.size(); i++){
            count[nums[i]]++;
        }
        // 1. Group numbers by their frequency (index = frequency)
    vector<vector<int>> buckets(nums.size() + 1);
    for (const auto& [num, freq] : count) {
        buckets[freq].push_back(num);
    }

    // 2. Scan backwards from highest frequency until we have k elements
    for (int i = buckets.size() - 1; i >= 1 && answer.size() < k; i--) {
        for (int num : buckets[i]) {
            answer.push_back(num);
            if (answer.size() == k) break;
        }
    }

    return answer;
    }
};
