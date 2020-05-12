int Solution::solve(vector<int> &A, int B, int C) {
    int n = A.size();
    if(B <= 0 || n == 0)
        return 0;
    int cnt = 0;
    if(B == 1){
        for(auto it : A)
            if(it < C)
                cnt++;
        return cnt;
    }
    int t = C;
    vector<int> v;
    while(t){
        v.push_back(t%10);
        t/=10;
    }
    reverse(v.begin(), v.end());
    if(v.size() < B)
        return 0;
    if(v.size() > B){
        if(A[0] == 0)
            return (n-1)* pow(n, B-1);
        return pow(n,B);
    }
    int ans = 0;
    for(int i = 0; i < v.size(); i++){
        cnt = 0;
        bool flag = false;
        for(int j =0; j < n; j++){
            if(A[j]<v[i])
                cnt++;
            if(v[i] == A[j])
                flag = true;
        }
        if(i == 0 && A[0] == 0)
            cnt--;
            
        ans = ans + cnt*pow(n, --B);
        if(!flag)
            return ans;
    }
    return ans;
}
