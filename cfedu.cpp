#include"bits/stdc++.h"
using namespace std;
#define int             long long int
#define endl            "\n"
#define pb              push_back
#define ppb             pop_back
#define pf              push_front
#define ppf             pop_front
#define mpr             make_pair
#define py              cout<<"YES\n"
#define pn              cout<<"NO\n"
#define pi              3.141592653589793238
#define pll             pair<int,int>
#define all(v)          v.begin(),v.end()
#define umap            unordered_map<int,int>
#define omap            map<int,int>
#define vec             vector<int>
#define fl(i,n)         for(int i=0;i<n;i++)
#define mod             1000000007
template <typename T>
istream &operator>>(istream &istream, vector<T> &v)
{
    for(auto &it:v)
    cin>>it;
    return istream;
}
// bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
// bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}
// bool sorta(const pair<int,int> &a,const pair<int,int> &b){ if(a.first<b.first) return true;else if(a.first!=b.first) return false;return (a.second < b.second);}
// string to_upper(string &a) { for (int i=0;i<(int)a.size();++i) a[i]&='_';  return a;}
// string to_lower(string &a) { for (int i=0;i<(int)a.size();++i) a[i]|=' ';  return a;}
// int gcd(int a,int b){if(b==0)return a;return gcd(b,a%b);}
// int lcm(int a,int b){return (a/gcd(a,b))*b;}
// int powermod(int x, int y, int p){int res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
/*======================================================================================*/
// cf edu round 138
void dsc(int t)
{
   int n;
   cin>>n;
   vec v1(n);
   cin>>v1;
   sort(all(v1));
   int elem=1,ans=0;
   int l=0,r=n-1;
   int mx=1;
   int c1=0;
   for(int i=0;i<n;i++)
   {
        if(v1[i]==1)
        {
            
            c1++;
        }
   }
//    ans=(ans+2)/2;
//    ans=min(ans,mx);
//    int ok=0;
int count=0;
    if(c1==0)
    {
        cout<<0<<endl;
        return;
    }
    else if(n==1 && c1==1)
    {
        cout<<1<<endl;
        return;
    }
    else
    {
        for(int i=c1-1;i>=0;i--)
        {
            int  count=1;
            bool ok1=true;
            if(i+i>=n)
            continue;
            for(int j=i;j<=i+i;j++)
            {
                if(v1[j]>count)
                {
                    ok1=false;
                    break;
                }
                count++;
            }
            
            if(ok1)
            {
                ans=i+1;
                break;
            }
        }
    }
    // cout<<ans<<endl;
//    ans=min(ans,c1);
   cout<<ans<<endl;
}

/*======================================================================================*/
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    int tt=t;
    while(t--)
    {
        // cout<<"Case #"<<tt-t<<": ";
        dsc(tt-t);
    }
}