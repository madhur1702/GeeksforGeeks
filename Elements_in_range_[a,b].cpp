class Solution {
  public:
    vector<int> cntInRange(vector<int> &arr, vector<vector<int>> &queries) {
        // code here
        vector<int> num;
        int count = 0;
        sort(arr.begin(),arr.end());
        for(int i = 0;i<queries.size();i++)
        {
            int a = queries[i][0];
            int b = queries[i][1];
            int left = lower_bound(arr.begin(),arr.end(),a) - arr.begin();
            int right = upper_bound(arr.begin(),arr.end(),b) - arr.begin();
            count = right - left;
            num.push_back(count);
        }
        return num;
    }
};
