int Solution::titleToNumber(string A) {
    int ans = 0;
    for(auto it : A){
        ans = ans*26+(it-'A'+1);
    }
    return ans;
}
