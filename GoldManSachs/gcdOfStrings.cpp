class Solution {
public:
    string gcd( string a, string b ){
        if( b.length(  ) == 0 ) return a;
        else{
            int n1 = a.length(  ), n2 = b.length(  ), i = 0, j = 0;
            while( i < n1 && j < n2 ){
                if( a[ i ] != b[ j ] ) return "";
                i++; j++;
            }
            if( i == n1 && j == n2 ) return a;
            return ( n1 - i >= n2 )?gcd( a.substr( i, n1 ), b ):gcd( b, a.substr( i, n1 ) );
        }
    }
    string gcdOfStrings(string str1, string str2) {
        return ( str1.length(  ) > str2.length(  ) )? gcd( str1, str2 ):gcd( str2, str1 );
    }
};