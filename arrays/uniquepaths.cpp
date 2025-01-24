// one way is recursive 

class Solution {
private:
    int calcPaths(int i, int j, int m, int n) {
        if(i==m-1 and j==n-1) return 1;
        if(i>m-1 || j>n-1) return 0;
        return calcPaths(i+1, j, m , n) + calcPaths(i, j+1, m , n);
    }
public:
    int uniquePaths(int m, int n) {
        return calcPaths(0, 0, m, n);
    }
};      

// 2nd is DP 

class Solution {
private:
    int calcPaths(int i, int j, int m, int n, vector<vector<int>> v) {
        if(i==m-1 and j==n-1) return 1;
        if(i>m-1 || j>n-1) return 0;
        if(v[i][j] != -1 ) return v[i][j];
        return v[i][j] = calcPaths(i+1, j, m , n, v) + calcPaths(i, j+1, m , n, v);
    }
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> v(m, vector<int>(n, -1));
        return calcPaths(0, 0, m, n, v);
    }
};

// 3rd is Maths

class Solution {
public:
    int uniquePaths(int m, int n) {
        int a = m+n-2;
        int r = max(m-1, n-1);
        int x = a-r;
        int y = x;
        if(y==0) return 1;
        cout<<x<<endl;
        double res=1;
        double res2=1;
        while(x--) {
            res *= (a--);
            res2*=(y--);
        }
        
        cout<<res<<" "<<y;
        return (res)/(res2);
    }
};