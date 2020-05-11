#define MOD 1000003

long power(long a, long b){
    if(a == 0) return 0;
    if(b == 0) return 1;
    if(b%2 == 0)
        return power((a*a)%MOD, b/2)%MOD;
    return (a%MOD * (power((a*a)%MOD, (b-1)/2)))%MOD;
}

int Solution::findRank(string s) {
    long n=s.size();
    vector<long> fact(n);
    fact[0]=1;
    for(int i = 1; i <n; i++)
        fact[i] = (fact[i-1]%MOD * i%MOD)%MOD;
        
    long ans=0;
    for(int i =0 ; i < n; i++){
        int cnt=0;
        for(int j=i+1; j <n;j++)
            if(s[j]<s[i])
                cnt++;
                
        map<char,int> m;
        for(int k=i; k<n; k++)
            m[s[k]]++;
        
        long z = 1;
        for(auto it : m)
            z = (z%MOD * (fact[it.second])%MOD)%MOD;
            
        long cur = (cnt%MOD * (fact[n-i-1]%MOD))%MOD;
        long modded = (cur * (power(z, MOD-2)%MOD)) %MOD;
        ans = (ans%MOD + modded%MOD)%MOD;
    }
    return ans+1;
}
