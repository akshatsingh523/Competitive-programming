class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> siu;
        for(int i=0;i<nums.size();i++){
            siu.push_back(nums[nums[i]]);
        }
        return siu;
    }
};
