
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        sort(arr.begin(),arr.end());
        for(int i=n-1;i>0;i--)
        {
            if(arr[i]!=arr[i-1])
            {
                return arr[i-1];
            }
        }
        return -1;
    }
};
