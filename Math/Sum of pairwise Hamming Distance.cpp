#define MOD 1000000007
#define ll long long
int Solution::hammingDistance(const vector<int> &A) {
    ll ans=0;
    int n=A.size();
    for(int i =0; i< 31; i++){
        ll cnt0 = 0;
        ll cnt1 = 0;
        for(int j = 0; j < n; j++){
            if(A[j] &( 1 << i))
                cnt1++;
            else
                cnt0++;
        }
        ll temp = (cnt0%MOD * (cnt1%MOD))%MOD;
        temp = (temp%MOD *2) %MOD;
        ans = (ans%MOD + temp%MOD) %MOD;
    }
    return (int)ans;
}
