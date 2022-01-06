class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size(  );
        int minSize = n + 1;
        for( int i = 0, j = 0, sum = 0; j < n; j++ ){
            sum += nums[ j ];
            while( i <= j && sum >= target ){
                
                minSize = min( j - i + 1, minSize );
                sum -= nums[ i++ ];
            }
        }
        return ( minSize <= n )? minSize:0;
    }
};