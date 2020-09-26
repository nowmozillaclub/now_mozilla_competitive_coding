#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,i,j,count;

	scanf("%d",&t);
	while(t--){

	    scanf("%d",&n);
	    count = 0;
	    int a[n][n];
	    for(i=0;i<n;i++)
	        for(j=0;j<n;j++)
	            scanf("%d" , &a[i][j]);
	    bool boolean[n];
	    for(j=0;j<n;j++)
        {
            if (a[0][j] == j+1)
                boolean[j] = true;
            else boolean[j] =false;
        }

        for (i=n-1;i>0;i--)
        {
            if(boolean[i] == false)
            {
                count++;
                for(j=i; j>0; j--)
                    boolean[j] = boolean[j]?false:true;
            }
        }

        printf("%d\n", count);
	}


	return 0;
}
