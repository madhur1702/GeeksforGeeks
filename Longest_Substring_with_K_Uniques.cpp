class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int n = s.size();
        int maxi = -1;
        int j = 0;
        unordered_map<char,int> hash;
        for(int i=0;i<n;i++)
        {
            hash[s[i]]++;
            while(hash.size()>k)
            {
                hash[s [j]]--;
                if(hash[s[j]] == 0)
                {
                    hash.erase(s[j]);
                }
                j++;
            }
            if(hash.size() == k){
            maxi = max(maxi,i-j+1);
    }    }
        return maxi;
    }
};
