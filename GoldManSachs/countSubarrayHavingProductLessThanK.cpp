class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int count = 0; long long product = 1;
        for( int i = 0, j = 0; j < n; j++ ){
            product *= a[ j ];
            while( i <= j && product >= k ) product /= a[ i++ ];
            count += j - i + 1;
        }
        return count;
    }
};