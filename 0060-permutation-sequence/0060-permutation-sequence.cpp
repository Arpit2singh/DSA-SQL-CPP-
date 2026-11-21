class Solution {
public:
    void check(vector<int>&nums , int k){
        if(k == 0) return ; 
        int pivot = -1 ; 
        for(int i = nums.size()-1 ; i>0 ; i--){
            if(nums[i] > nums[i-1]){
                pivot = i-1 ; 
                break ; 
            }
        }

        if(pivot == -1){
            reverse(nums.begin() , nums.end()) ; 
            check(nums , k-1) ; 
            return ; 
        }
        for(int i = nums.size()-1 ; i>pivot ; i--){
            if(nums[i] > nums[pivot]){
                swap(nums[i] , nums[pivot]) ; 
                break  ;
            }
        }

        int left = pivot+1 ; 
        int right = nums.size()-1 ; 

        while(left < right){
         swap(nums[left] , nums[right]) ; 
         left++ ;
         right-- ; 
        }
       
     
        check(nums , k-1) ; 
    }
    string getPermutation(int n, int k) {
        vector<int>v ; 
        for(int i = 1 ; i<=n ; i++){
            v.push_back(i) ; 
        }
        
        check(v, k -1);
        string s = "" ; 
        for(int i = 0 ; i<v.size() ; i++){
            s+= to_string(v[i]) ; 
        }
        return s ; 
    }
};