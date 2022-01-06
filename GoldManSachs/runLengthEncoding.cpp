class Solution{ 
    public:
    string encode(string src){     
        //Your code here 
        int n = src.length(  );
        string str;
        char c = src[ 0 ]; int count = 1, i = 1;
        for( i = 1; i < n; i++ ){
            if( src[ i ] == c ) count++;
            else{
                str += c + to_string( count );
                count = 1; c = src[ i ];
            }
        }
        str += c + to_string( count );
        return str;
    }
 };