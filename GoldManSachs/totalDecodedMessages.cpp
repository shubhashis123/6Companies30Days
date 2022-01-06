class Solution {
	public:
		int CountWays( string str ){
		    // Code here
		    int n = str.length(  ), m = 1000000007;
		    int t[ n + 1 ]; t[ 0 ] = 1;
		    for( int i = 1; i <= n; i++ ){
		        t[ i ] = 0;
		        if( i == 1 ) t[ i ] = ( str[ i - 1 ] > '0' );
		        else{
		            if( str[ i - 2 ] == '1' || ( str[ i - 2 ] == '2' && str[ i - 1 ] <= '6' ) ){
		                if( str[ i - 1 ] == '0' ) t[ i ] = t[ i - 2 ];
		                else t[ i ] = ( ( long ) t[ i - 1 ] + t[ i - 2 ] ) % m;
		            }
		            else if( ( str[ i - 1 ] != '0' ) && ( str[ i - 2 ] == '0' || str[ i - 2 ] > '2' || str[ i - 1 ] > '6' ) ) t[ i ] = t[ i - 1 ];
		        }
		    }
		    return t[ n ];
		}

};