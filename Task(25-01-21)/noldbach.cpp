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
    //#define mp make_pair

    using namespace std;

    typedef pair<int, int> pi;
    typedef vector<int> vi;
    typedef long long ll;

    const int N = INT_MAX;

    bool is_prime(int n) 
    {
        if (n == 1) {
            return false;
        }
        int i = 2;
        while (i*i <= n) 
        {
            if (n % i == 0) {
                return false;
            }
            i += 1;
        }
        return true;
    }
    int a[1010];
    map<int,int>mp;
    int main()
    {
        std::ios::sync_with_stdio(false);
        cin.tie(0);
        int T = 1;
        fori(z, 1, T+1, 1)
        {
            int n,k,num=0,ans=0;
            cin>>n>>k;
            for(int i=1;i<=n;i++)
            {
                if(is_prime(i)){
                    a[num++]=i;
                    mp[i]=1;
                }
            }
            for(int i=0;i<num-1;i++){
                if(mp[a[i]+a[i+1]+1]&&a[i]+a[i+1]+1<=n)
                {
                    ans++;
                }
            }
            if(ans>=k)
                cout<<"YES";
            else
                cout<<"NO";
        }
        return 0;
    }
