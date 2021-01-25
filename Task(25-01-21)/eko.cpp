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

    int a[1000005];

    int bsearch(int a[],int n,int k)
    {
        int l = 1, h = a[n-1], m, i;
        ll cnt;
        while(l < h) {
            m = l + (h-l+1)/2;
            cnt = 0;
            for(i = 0; i < n; i++)
            {
                if(a[i] > m) 
                {
                    cnt += (a[i]-m);
                }
            }
            if(cnt >= k) 
            {
                l = m;
            }
            else 
            {
                h = m-1;
            }
        }
        return l;
    }

    int main()
    {
        std::ios::sync_with_stdio(false);
        cin.tie(0);
        int T = 1;
        //cin>>T;
        fori(z, 1, T+1, 1)
        {
            ll k;
            int n;
            cin>>n>>k;
            rep(i, n)
                cin>>a[i];
            sort(a, a+n);
            cout<<bsearch(a, n, k)<<endl;
        }
        return 0;
    }
