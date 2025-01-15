// solution 1

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);
        for(int i=0; i<numRows; i++){
            res[i].resize(i+1);
            res[i][0] = res[i][i] = 1;
            for(int j=1; j<i; j++){
                res[i][j] = res[i-1][j-1] + res[i-1][j];
            }
        }
        return res;
        
    }
};

// solution 2

class Solution {
private:
    vector<int> generateRow(int row) {
        long long res = 1;
        vector<int> ans;
        ans.push_back(1);
        for(int i=1; i<row; i++) {
            res = res * (row-i);
            res = res / i;
            ans.push_back(res);
        }
        return ans;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for(int i=1; i<=numRows; i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};