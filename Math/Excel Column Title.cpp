string Solution::convertToTitle(int A) {
    string ans, temp;
    while(A){
        temp ="";
        int z = A%26;
        A/= 26;
        if(z == 0){
            temp = "Z";
            A--;}
        else{
            temp += ( 'A' + z - 1);
        }
        ans = temp+ans;
    }
    return ans;
}
