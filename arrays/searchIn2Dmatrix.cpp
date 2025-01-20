class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        // lets iterate in a row 
        int i=0;
        int j=matrix[0].size()-1;

        while(i<matrix.size()-1) {
            if(matrix[i][j] >= target) {
                break;
            }
            i++;
        }
        cout<<i<<" and "<<j<<endl;
        // i = 0, j = 3
        while(j>=0) {
            if(matrix[i][j] == target)
                return 1;
            j--;
        }
        return 0;
    }
};