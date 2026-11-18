class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>v ; 
     
        for(int i = 1 ; i<=n ; i++){
            vector<int>temp(i , 0) ; 
            temp[0] = 1; 
            temp.back() = 1 ;
            v.push_back(temp) ;  
        }
        for(int i = 2 ; i<n ; i++){
            for(int j = 1 ; j<v[i].size()-1 ; j++){
                v[i][j] = v[i-1][j-1] + v[i-1][j] ; 
            }
        }
        return v ; 
    }
};