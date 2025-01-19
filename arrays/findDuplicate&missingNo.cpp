//best approach using mathematic sum of n no. and sum of n2 no.
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long n = A.size();
    
    long long sn = (n * (n+1))/2;
    long long sn2 = (n * (n+1) * (2*n+1))/6;
    long long asn = 0, asn2 = 0;
    for(int i=0; i<n; i++) {
        asn += A[i];
        asn2 += (long long)A[i] * (long long)A[i];
    }
    long long val1 = asn - sn;
    long long val2 = asn2 - sn2;
    val2/=val1;
    long long x = (val1 + val2) / 2;
    long long y = x - val1;
    
    return {(int)x, (int)y};
}

// other way using hashing 
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    
    int temp[A.size()+1] = {0};
    int a = -1, b = -1;
    for(int i=0; i<A.size(); i++){
        temp[A[i]]++;
    }
    for(int i=1; i<=A.size()+1; i++){
        if(temp[i]==0) {
            b = i;
        } else if(temp[i]==2) {
            a = i;
        }
        if(a!=-1 and b!=-1)
            break;
    }
    return {a, b};
}