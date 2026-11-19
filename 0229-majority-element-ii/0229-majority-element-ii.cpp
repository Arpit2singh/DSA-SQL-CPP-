class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cand1 = -1 ; 
        int cand2 = -1 ; 
        int count1 = 0 ; 
        int count2 = 0 ; 

        for(int i = 0 ; i<nums.size() ; i++){
            
              if(cand1 == nums[i]){
                count1++ ; 
            }
            else if(cand2 == nums[i]){
                count2++ ; 
            }
             else if(count1 == 0){
                cand1 = nums[i] ;
                count1 = 1 ; 
            }
            else if(count2 == 0 && cand1 != nums[i]){
                cand2 = nums[i] ; 
                count2 = 1; 
            }
           
            else {
                count1-- ;
                count2-- ; 
            }
        }
        cout<<cand1 << " " <<cand2 ; 
        int m = 0 ; 
        int n = 0 ; 
        for(int i = 0 ; i<nums.size() ; i++){
            if(cand1 == nums[i]) m++ ; 
            if(cand2 == nums[i]) n++ ; 
        }

        if(cand1 != cand2 && m > nums.size()/3 && n > nums.size()/3) return {cand1 , cand2} ; 

        if( m > nums.size()/3){
            return {cand1} ; 
        }
          if( n > nums.size()/3){
            return {cand2} ; 
        }
        return {} ; 
    }
};