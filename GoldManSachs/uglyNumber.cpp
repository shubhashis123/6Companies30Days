class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	   // int i1 = 0, i2 = 0, i3 = 0, i = 0; unsigned long long nums[ n ];
	    
	   // nums[ 0 ] = 1;
	   // while( i < n - 1 ){
	   //     int next = min( nums[ i1 ] * 2, min( nums[ i2 ] * 3, nums[ i3 ] * 5 ) );
	   //     nums[ ++i ] = next;
	   //     if( nums[ i1 ] * 2 == next ) i1++;
	   //     if( nums[ i2 ] * 3 == next ) i2++;
	   //     if( nums[ i3 ] * 5 == next ) i3++;
	   // } return nums[ n - 1 ];
	   
        int i1 = 0, i2 = 0, i3 = 0;
        unsigned long long nums[ n ]; int i = 0; nums[ 0 ] = 1;
        while( i < n - 1 ){
            unsigned long long next = min( nums[ i1 ] * 2, min( nums[ i2 ] * 3, nums[ i3 ] * 5 ) );// cout << next << ' ';
            nums[ ++i ] = next;
            if( nums[ i1 ] * 2 == next ) i1++;            
            if( nums[ i2 ] * 3 == next ) i2++;
            if( nums[ i3 ] * 5 == next ) i3++;
        }
        return nums[ n - 1 ];
	}
};