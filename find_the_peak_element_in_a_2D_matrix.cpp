class Solution {
  public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                bool top = true,bottom = true,left = true,right = true;
                if((i-1)>=0 && mat[i-1][j]>mat[i][j])
                {
                    top = false;
                }
                if((i+1)<n && mat[i+1][j]>mat[i][j])
                {
                    bottom = false;
                }
                if((j-1)>=0 && mat[i][j-1]>mat[i][j])
                {
                    left = false;
                }
                if((j+1)<m && mat[i][j+1]>mat[i][j])
                {
                    right = false;
                }
                if(top && bottom && right && left)
                {
                    return {i,j};
                }
            }
        }
        return {-1,-1};
    }
};
