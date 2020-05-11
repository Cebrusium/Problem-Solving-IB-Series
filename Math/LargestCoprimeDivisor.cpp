int Solution::cpFact(int A, int B) {
    if(__gcd(A,B) == 1)
        return A;
    while(__gcd(A,B) != 1){
        A /= __gcd(A,B);
    }
    return A;
}
