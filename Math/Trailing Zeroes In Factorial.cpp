int Solution::trailingZeroes(int A) {
    int cnt=0;
    while(A/5){
        cnt += A/5;
        A/= 5;
    }
    return cnt;
}
