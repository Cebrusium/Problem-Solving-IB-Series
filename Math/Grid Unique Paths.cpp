#define ll long long

int Solution::uniquePaths(int A, int B) {
    if(A == 1 || B == 1)
        return 1;
        
    ll a = 1;
    for(int i = A; i <= A+B-2; i++){
        a = a*i;
        a/= (i-A+1);
    }
    return (int)a;
}
