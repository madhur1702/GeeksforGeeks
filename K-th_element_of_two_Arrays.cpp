/*
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
*/
class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        vector<int> arr;
        int n = a.size();
        int m = b.size();
        int i =0,j = 0;
        while(i<n && j<m)
        {
            if(a[i]<=b[j])
            {
                arr.push_back(a[i]);
                i++;
            }else
            {
                arr.push_back(b[j]);
                j++;
            }
        }
        while(i<n)
        {
            arr.push_back(a[i]);
            i++;
        }
        while(j<m)
        {
            arr.push_back(b[j]);
            j++;
        }
        return arr[k-1];
    }
};
