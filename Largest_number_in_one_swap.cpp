class Solution {
  public:
    string largestSwap(string &s) {
        // code here
        int n = s.size();
        vector<int> a(10,-1);
        for(int i = 0;i<n;i++)
        {
            a[s[i] - '0'] = i;
        }
        for(int i=0;i<n;i++)
        {
            for(int d = 9;d>s[i] - '0';d--)
            {
                if(a[d]>i)
                {
                    swap(s[i],s[a[d]]);
                    return s;
                }
            }
        }
        return s;
    }
};
