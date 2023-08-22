//https://www.codingninjas.com/studio/problems/l-to-r-xor_8160412

int xorFrom1(int n){
    switch(n%4){
        case 0:
            return n;
        case 1:
            return 1;
        case 2:
            return n+1;
        default:
            return 0;
    }
}

int findXOR(int L, int R){
    return xorFrom1(L-1) ^ xorFrom1(R);
}