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
	    //cin>>T;
	    fori(z, 1, T+1,	1)
	    {
	    	int n, k, max=0;
	    	cin>>n;
	    	string nm, wnr;
	    	map<string,int> m;
	    	rep(i, n)
	    	{
	    		cin>>nm>>k;
	    		m[nm]+=k;
	    		if(m[nm]>max)
	    		{
	    			max=m[nm];
	    			wnr=nm;
	    		}
	    	}
	    	cout<<wnr;
	    }
		return 0;
	}