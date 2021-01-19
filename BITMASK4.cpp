//pls work	
	#include <bits/stdc++.h>
	#include <cmath>
	#include <cctype>
	#include <cstring>

	#define fori(i, j, k, in) for (int i=j ; i<k ; i+=in)
	#define rfori(i, j, k, in) for (int i=j-1 ; i>=k ; i-=in)
	#define rep(i, j) fori(i, 0, j, 1)
	#define rrep(i, j) rfori(i, j, 0, 1)
	#define sq(a) (a)*(a)

	using namespace std;

	typedef pair<int, int> pi;
	typedef vector<int> vi;
	typedef long long ll;

	const int N = INT_MAX;

	int main()
	{
		std::ios::sync_with_stdio(false);
		cin.tie(0);
	    int T = 1;
	    cin>>T;
	    fori(z, 1, T+1,	1)
	    {
	    	int n;
	    	cin>>n;
	    	int ar[3][n];
	    	rep(i, n)
	    		cin>>ar[0][i]>>ar[1][i]>>ar[2][i];
	    	int cnt=0;
	    	rep(i, n)
	    	{
	    		int t=1;
	    		for(int j=i+1; j<n; j++)
	    		{
	    			if(ar[0][i]*ar[1][j]==ar[1][i]*ar[0][j])
	    			{
	    				if(ar[0][i]*ar[2][j]!=ar[2][i]*ar[0][j])
	    				{
	    					t++;
	    				}
	    			}
	    		}
	    		if(t>cnt)
	    			cnt=t;
	    	}
	    	cout<<cnt<<endl;
	    }
		return 0;
	}