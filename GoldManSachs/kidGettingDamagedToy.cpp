class Solution {
  public:
    int findPosition(int N , int M , int K) {
        // code here
        return ( ( M + K - 1 ) % N == 0 )?N:( ( M + K - 1 ) % N );
    }
};