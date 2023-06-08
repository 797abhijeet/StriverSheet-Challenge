class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //transpose
        //i-->0 to n-2
        //j-->i+1 to n-1
        int n=matrix.size();
        for(int i=0;i<=n-2;i++){
            for(int j=i+1;j<=n-1;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //reverse
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};