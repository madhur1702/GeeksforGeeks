class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int> st;
        int n = a.size(),m = b.size();
        int i = 0,j = 0;
        while(i<n || j<m)
        {
            if(i<n)
            {
                st.insert(a[i]);
                i++;
            }
            if(j<m)
            {
                st.insert(b[j]);
                j++;
            }
        }
        vector<int> num;
        for(int i : st)
        {
            num.push_back(i);
        }
        return num;
    }
};
