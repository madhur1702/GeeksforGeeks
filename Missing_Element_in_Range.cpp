class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        // code here
        unordered_set<int> st(arr.begin(),arr.end());
        vector<int> nums;
        for(int i = low;i<=high;i++) 
        {
            if(st.find(i) == st.end())
            {
                nums.push_back(i);
            }
        }
        return nums;
    }
};
