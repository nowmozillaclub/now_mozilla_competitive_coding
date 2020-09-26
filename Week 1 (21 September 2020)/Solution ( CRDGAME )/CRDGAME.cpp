#include <bits/stdc++.h>
using namespace std;

int calc(long long n){
    int sum=0;
    while(n!=0)
    {
        sum = sum + n%10;
        n = n/10;
    }
    return sum;
}

int main() {
	// your code goes here

	int t,n,i, sa,sb, pointa, pointb;
	long long a,b;
	scanf("%d", &t);

	while(t--){

	    scanf("%d", &n);
	    pointa=0; pointb=0;

	    for(i=0;i<n;i++)
	    {
	        scanf("%lld %lld",&a,&b);
	        sa = calc(a); sb=calc(b);

	        if (sa==sb){
	            pointa += 1;
	            pointb += 1;
	        }
	        else sa>sb?pointa+=1:pointb+=1;
	    }
	    if(pointa > pointb)
	        printf("0 %d\n", pointa);
	   else if (pointa < pointb)
	        printf("1 %d\n", pointb);
	   else  printf("2 %d\n", pointb);

	}

	return 0;
}
