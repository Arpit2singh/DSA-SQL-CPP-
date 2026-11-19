class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int>st ; 
       if(nums.size() == 0) return 0 ; 
       if(nums.size() == 1) return 1 ; 
       for(int i = 0 ; i<nums.size() ; i++){
        st.insert(nums[i]) ; 
       } 
       int maxi = 1 ; 
       for(auto num :st){
            if(st.count(num-1)) continue ; 
          
                 int count = 1 ; 
                 int cand = num+1 ; 
                while(st.count(cand)){
                    count++ ; 
                    cand++;
                }
                maxi = max(maxi , count) ; 
            
       }
       return maxi ; 
    }
};