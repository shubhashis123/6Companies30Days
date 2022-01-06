class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        int n = string_list.size(  );
        unordered_map< string, vector< string > > map;
        for( string str : string_list ){
            int charSet[ 26 ] = { 0 };
            for( char c : str ) charSet[ c - 'a' ]++;
            string s;
            for( int i = 0; i < 26; i++ ) s += to_string( charSet[ i ] );
            map[ s ].push_back( str );
        }
        vector< vector< string > > grpAnagrams;
        for( auto ana : map ) grpAnagrams.push_back( ana.second );
        return grpAnagrams;
    }
};