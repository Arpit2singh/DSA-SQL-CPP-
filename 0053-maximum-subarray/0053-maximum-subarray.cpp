class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int mini = INT_MAX ; 
        // int maxi = INT_MIN ; 
        // int sum = 0 ; 
        // for(int i = 0 ; i<nums.size() ; i++){
           
        // }
        // if(nums.size() == 1) return nums[0] ; 
        int mini = 0 ;
        int sum = INT_MIN ; 
        for(int i = 0 ;i<nums.size() ; i++){
            mini = max(nums[i] , nums[i] + mini) ; 
            sum = max(sum , mini) ; 
        }

        return sum ; 
    }
};