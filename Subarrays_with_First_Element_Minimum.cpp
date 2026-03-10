class Solution {
  public:
    int countSubarrays(vector<int> &arr) {
        // code here
        stack<int> st;
        int n = arr.size();
        int ans = 0;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && arr[st.top()] >= arr[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                ans += (n - i);
            }else
            {
                ans += (st.top() - i);
            }
            st.push(i);
        }
        return ans;
    }
};
