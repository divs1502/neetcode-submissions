class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> counter;
        for(int num: nums){
            counter[num]++;
        }
        
        for (const auto& [num, count] : counter) {
            if (count > 1){
                return true;
            }
        }
        return false;
    }
};