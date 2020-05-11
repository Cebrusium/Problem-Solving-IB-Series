#define MOD 1000003
int Solution::findRank(string A) {
    int n = A.size();
    int fact[n+1];
    fact[0] = fact[1] = 1;
    for(int i = 2; i <=n; i++)
        fact[i] = ((fact[i-1]%MOD)  * (i %MOD)) % MOD;
        
    int ans = 0;
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = i+1; j < n; j++)
            if(A[j] < A[i])
                cnt++;
        ans = (ans %MOD  + (cnt * fact[n-i-1])%MOD) %MOD;
    }
    return ans+1;
}
