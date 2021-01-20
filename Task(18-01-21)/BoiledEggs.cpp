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
	#define pb push_back
	#define mp make_pair

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
	    	int n, p, q;
	    	cin>>n>>p>>q;
	    	int wt[n], sum=0, rem;
	    	rep(i, n)
		    	cin>>wt[i];
		    rep(i, n)
		    {
		    	sum+=wt[i];
		    	rem=i+1;
		    	if(sum>q)
		    	{
		    		rem--;
		    		break;
		    	}
		    }
		    cout<<"Case "<<z<<": "<<min(rem,p)<<endl;
	    }
		return 0;
	}
