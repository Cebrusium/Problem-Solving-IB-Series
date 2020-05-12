int Solution::reverse(int A) {
    int f = (A< 0) ? -1 : 1;
    int ans=0;
    while(A){
        int z = A%10;
        if(f == 1){
            if(ans > INT_MAX/10 || (ans == INT_MAX/10 && z > INT_MAX%10))
                return 0;
            ans = ans*10 + z;
        }
        else{
            if(ans < INT_MIN/10 || (ans == INT_MIN/10 && z < INT_MIN%10))
                return 0;
            ans = ans*10 + z;
        }
        A/= 10;
    }
    return ans;
}
