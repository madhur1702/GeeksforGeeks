
class Solution {
  public:
    int findUnique(vector<int> &arr) {
        // code here
        int res = 0;
        for(int i : arr)
        {
            res ^= i;
        }
        return res;
    }
};
