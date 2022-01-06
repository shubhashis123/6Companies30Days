class Solution {
public:
    vector< int > findKmax(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq; 
        k = min( k, nums.size(  ) );
        for (int num : nums) {
            pq.push( num );
            if( pq.size(  ) > k ) pq.pop(  );
            
        }
        vector< int > kmax;
        for( !pq.empty(  ) ){ kmax.push_back( pq.top(  ) ); pq.pop(  ); }

        return kmax;
    }
};