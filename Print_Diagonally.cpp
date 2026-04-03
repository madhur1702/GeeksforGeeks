class Solution {
  public:
    vector<int> diagView(vector<vector<int>> mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        vector<int> ans;
        for(int col = 0;col<m;col++)
        {
            int i = 0,j = col;
            while(i<n && j>=0)
            {
                ans.push_back(mat[i][j]);
                i++;
                j--;
            }
        }
        for(int row=  1;row<n;row++)
        {
            int i = row,j = m-1;
            while(i<n && j>=0)
            {
                ans.push_back(mat[i][j]);
                i++;
                j--;
            }
        }
        return ans;
    }
};
