// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int maxrow = 0,maxi = 0;
        for(int i = 0;i<arr.size();i++)
        {
            int total = 0;
            for(int j = 0;j<arr[i].size();j++)
            { 
                if(arr[i][j]==1)
                {
                    total += 1;
                }
            }
            if(maxi < total)
            {
                maxi = total;
                maxrow = i;
            }
        }
        return maxrow;
    }
};
