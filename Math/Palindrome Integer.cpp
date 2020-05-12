int Solution::isPalindrome(int A) {
    int p;
    if(A< 0)
        return 0;
    if(A < 10)
        return 1;
    p = log10(A);
    while(A){
        if(p <= 0)
            return 1;
        int z = A/(int)pow(10,p);
        int y = A%10;
        if(z != y)
            return 0;
        A = A%(int)pow(10,p);
        A /=10;
        p -= 2;
    }
    return 1;
}
