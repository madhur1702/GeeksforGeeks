
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        int n = arr.size();
        unordered_map<int,int> hash;
        vector<int> res;
        for(int i : arr)
        {
            hash[i]++;
        }
        for(auto it : hash)
        {
            if(it.second>n/3)
            {
                res.push_back(it.first);
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};
