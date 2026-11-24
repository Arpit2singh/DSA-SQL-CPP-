class Solution {
public:
    string reverseWords(string s) {
        vector<string>v ; 
        string token ; 

        stringstream ss(s) ; 
        while(getline(ss, token , ' ')){
            string t = token ; 
            string n = "" ; 
            int left = 0 ; 
            while(left < t.size()){
                if(t[left] != ' '){
                    n+=t[left] ; 
                }
                left++ ; 
            }
           
          if(n.size() != 0)  v.push_back(n) ; 
        }
        string ans ="" ; 

        for(int i = 0 ; i<v.size() ; i++){
            reverse(v[i].begin() , v[i].end()) ; 
            ans+=v[i]+' ' ; 
        }

        if(!ans.empty() && ans.back() == ' '){
            ans.pop_back() ; 
        }
        reverse(ans.begin() , ans.end()) ;
        // while(ans.front() == ' '){
        //     ans.erase(0 , 1) ; 
        // }
        // while(ans.back() == ' '){
        //     ans.pop_back() ; 
        // }
        return ans ; 




    }
};