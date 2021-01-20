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
	    //cin>>T;
	    fori(z, 1, T+1,	1)
	    {
	    	int n, l, w, pos, rad;
	    	while(cin>>n>>l>>w)
	    	{
	    		vector<pair<double,double>> v;
	    		rep(i, n)
	    		{
	    			cin>>pos>>rad;
	    			if(((rad*rad)-(w/2.0)*(w/2.0))>0)
	    			{
	    				double del = sqrt((double)rad*rad-(w/2.0)*(w/2.0));
	    				v.push_back({(double)pos-del,(double)pos+del});
	    			}
	    		}
	    		sort(v.begin(),v.end());
	    		double temp=0;
	    		int ans=0;
	    		for(int i=0; i<v.size() && temp<l; i++)
	    		{
	    			if(v[i].first > temp)
	    				break;
	    			ans++;
	    			double far=v[i].second;
	    			while(i<(v.size()-1) && v[i+1].first<=temp)
	    			{
	    				far = max(v[++i].second, far);
	    			}
	    			temp = far;
	    			//cout<<ans<<" ";
	    		}
	    		if(temp<1)
	    			ans=-1;
	    		cout<<ans<<endl;
	    	}
	    }
		return 0;
	}
