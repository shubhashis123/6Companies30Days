class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        // code here
        if( R1[ 0 ] < L2[ 0 ] || R2[ 0 ] < L1[ 0 ] ) return false;
        else if( R1[ 1 ] > L2[ 1 ] || R2[ 1 ] > L1[ 1 ] ) return false;
        else return true;
    }
};