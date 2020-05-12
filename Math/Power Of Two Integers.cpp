int Solution::isPower(int A) {
    if(A == 1)
        return 1;
        
    int p = sqrt(A);
    long long ans;
    for(int i = 2; i <= p; i++){
        double x = (log10(A)/log10(i));
        if(floor(x) == ceil(x))
            return 1;
    }
    return 0;
}
