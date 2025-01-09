class Solution {
private:
    struct PairHash {
        template<typename T1, typename T2>
        size_t operator()(const pair<T1, T2> &p) const {
            return hash<T1>()(p.first) ^ (hash<T2>()(p.second) << 1);
        }
    };

public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<pair<int, int>, PairHash> pairSet;

        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    pairSet.insert(make_pair(i,j));
                }
            }
        }

        for(const auto &p : pairSet) {
            for(int i=0; i<matrix[0].size(); i++){
                matrix[p.first][i] = 0;
            }
            for(int j=0; j<matrix.size(); j++){
                matrix[j][p.second] = 0;
            }
            cout<<p.first<<" "<<p.second<<endl;
        }
    }
};

// 2nd solution
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> arr(m, 0);
        vector<int> arr1(n, 0); 

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j] == 0){
                    arr[i] = 1;
                    arr1[j] = 1;
                }
            }
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(arr[i] == 1 or arr1[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};