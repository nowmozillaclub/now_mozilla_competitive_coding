#include <bits/stdc++.h>
using namespace std;

long long pivot(long long n)
{
    long double nn = n;
    return (long long)(((-2.0)+(sqrt(4.0+8*(n*n+n)))) / 4.0);       // from quad equation 2x^2 + 2x - (n^2 + n) = 0
    // which comes from (x(x+1))/2= (n(n+1)/2)/2 and long long takes its floor value
}

long long nc2 (long long n){
    return (n*n - n)/2;
}

int main() {
	// your code goes here
	long long t,n, sumn, x, ans;
	scanf("%lld", &t);
	while(t--){
	    ans=0;
	    scanf("%lld",&n);
	    sumn = (n*(n+1))/2;

	    if(sumn%2==1){         // not possible case sum=odd
	        ans = 0;
	    }
	    else{
	        x = pivot(n);
	        ans += (n-x);

	        if ( (x*x+x)*2 == (n*n + n) )
	            ans += nc2(x) + nc2(n-x);
            // if pivot actually exists before, then we can do all possible swaps in grp1 and all in grp2
	    }

	    printf("%lld\n", ans);

	}


	return 0;
}
