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
        fori(z, 1, T+1, 1)
        {
            int n;
            while(cin>>n)
            {
                int a[n];
                int fst, sec;
                rep(i, n)
                    cin>>a[i];
                int m, mn=N;
                cin>>m;
                sort(a, a+n);
                rep(k, n)
                {
                    for(int j=k+1; j<n; j++)
                    {
                        if(a[k]+a[j]==m && abs(a[k]-a[j])<mn)
                        {
                            fst=a[k];
                            sec=a[j];
                            mn=abs(a[k]-a[j]);
                        }
                    }
                }
                cout<<"Peter should buy books whose prices are "<<fst<<" and "<<sec<<"."<<endl<<endl;
            }
        }
        return 0;
    }
