class Solution{
public:
    string decodedString(string s){
        // code here
        int n = s.length(  );
        stack< string > st; string decodedString;
        string num; int i = 0;
        
        while( i < n || !st.empty(  ) ){
           if( s[i] >= '0' && s[i] <= '9' ){ while( s[i] >= '0' && s[i] <= '9' ){ num += s[i]; i++; }; st.push( num ); num = ""; }
            
            else if( s[i] == '[' ){
                i++;
            }
            else if( s[i] == ']' ){ string decodedStr = "";
                if( !st.empty(  ) ){
                    string str = st.top(  ); st.pop(  );
                    string val = st.top(  ); st.pop(  );
                    if( val[0] >= 'a' && val[0] <= 'z' ) decodedStr = val + str;
                    
                    else{
                        int k = 0;
                        for( char c : val ) k = k * 10 + ( c - '0' );
                        while( k-- ) decodedStr += str;
                        i++;
                    }
                }
                
                st.push( decodedStr );
            }
            else if( i < n ){
                string str;
                
                while( s[i] >= 'a' && s[i] <= 'z' ) str += s[i++];
                st.push( str );
            }
            else{
                
                string str = st.top(  );
                decodedString = str + decodedString;
                
                st.pop(  );
            }
        } return decodedString;
    }
};