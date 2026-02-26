class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        // code here
        unordered_map<int,int> hash,hash1;
        int n = s1.size();
        int m  = s2.size();
        if(n != m)
        {
            return false;
        }
        for(int i=0;i<n;i++)
        {
            if(hash.find(s1[i])!=hash.end())
            {
                if(hash[s1[i]] != s2[i])
                {
                    return false;
                }
            }else{
            hash[s1[i]] = s2[i];
    }    
            if(hash1.find(s2[i])!=hash1.end())
            {
                if(hash1[s2[i]] != s1[i])
                {
                    return false;
                }
            }else{
            hash1[s2[i]] = s1[i];
    }    
            
        }
        return true;
    }
};
