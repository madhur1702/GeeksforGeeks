class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
        int n = arr.size();
        unordered_set<int> st;
        for(int i=0;i<n;i++)
        {
            arr[i] *= arr[i];
            st.insert(arr[i]);
        }
        for(int i = 0;i<n;i++)
        {
            for(int j = i+1;j<n;j++)
            {
                if(st.count(arr[i]+arr[j]))
                {
                    return true;
                }
            }
        }
        return false;
    }
};
