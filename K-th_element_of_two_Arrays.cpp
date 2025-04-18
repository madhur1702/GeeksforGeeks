
class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        vector<int> c;
        for(auto it : a)
        {
            c.push_back(it);
        }
        for(auto it : b)
        {
            c.push_back(it);
        }
        sort(c.begin(),c.end());
        return c[k-1];
    }
};
