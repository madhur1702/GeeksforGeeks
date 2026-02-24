class Solution {
  public:
    int equalSumSpan(vector<int> &a1, vector<int> &a2) {
        // code here
        int n = a1.size();
        int prefix = 0,maxlen = 0;
        unordered_map<int,int> hash;
        for(int i=0;i<n;i++)
        {
            prefix += (a1[i] - a2[i]);
            if(prefix == 0)
            {
                maxlen = i + 1;
            }
            if(hash.find(prefix)!=hash.end())
            {
                maxlen = max(maxlen,i - hash[prefix]);
            }else
            {
                hash[prefix] = i;
            }
        }
        return maxlen;
    }
};
