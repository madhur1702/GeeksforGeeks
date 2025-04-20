
// User function Template for C++
class Solution {
  public:
    int findDuplicate(vector<int>& arr) {
        // code here
        unordered_map<int,int> hash;
        for(int i : arr)
        {
            hash[i]++;
        }
        for(auto it : hash)
        {
            if(it.second>1)
            {
                return it.first;
            }
        }
        return 0;
    }
};
