int rangeBitwiseAnd(int m, int n) {
    int cnt = 0;
    while (n != m){
        n = n >> 1;
        m = m >> 1;
        cnt++;
    }
    return (m << cnt);
        
}
