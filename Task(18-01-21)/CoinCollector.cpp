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

	struct dob
	{
		string nm;
		int d,m,y;
	};

	bool comp(dob a, dob b)
	{
		if(a.y!=b.y)
			return a.y<b.y;
		else if(a.m!=b.m)
			return a.m<b.m;
		else
			return a.d<b.d;
	}

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
	    	int coins[n];
	    	rep(i,n)
	    		cin>>coins[i];
	    	int tot = coins[0], cnt = 1;
	    	for(int i=1; i<n-1; i++)
	    	{
	    		if(coins[i]+tot<coins[i+1])
	    		{
	    			tot+=coins[i];
	    			cnt++;
	    		}
	    	}
	    	cout<<cnt+1<<endl;
	    }
		return 0;
	}
