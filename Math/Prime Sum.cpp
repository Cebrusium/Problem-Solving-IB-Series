vector<int> Solution::primesum(int A) {
    vector<bool> sieve(A, true);
    sieve[0] = sieve[1] = false;
    for(int i = 2; i*i < sieve.size(); i++){
        if(sieve[i])
        for(int j = i*i; j < sieve.size(); j+= i)
            sieve[j] = false;
    }
    for(int i = 0 ; i < A; i++){
        if(sieve[i] && sieve[A-i])
            return {i, A-i};
    }
    return {};
}
