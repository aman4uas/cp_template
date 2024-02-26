/*
  Author : Aman Singh
*/
#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
typedef long long ll;

/*** Debug Code Snippet ***/
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(long long int t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(long double t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(unsigned long long t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

/*** Combinatorics Code Snippet ***/
vector<ll>factorial, modularInverse;
ll power(ll base, ll x) {if(x<0){return 0;} if(x==0){return 1;} ll ans=1; while(x>0){ if(x%2==1){ans=(ans*base)%MOD;} base=(base*base)%MOD; x=x/2; } return ans;}
void preComputeFact(ll N) {factorial.resize(N+1); modularInverse.resize(N+1); factorial[0]=1; for(ll i=1; i<=N; i++){ factorial[i]=(factorial[i-1]*i)%MOD; modularInverse[i]=power(factorial[i], MOD-2);}}
ll ncr(ll n, ll r) {if(r>n){return 0;} if(n==r || r==0){return 1;} ll numo=factorial[n]; ll invdeno = (modularInverse[r]*modularInverse[n-r])%MOD; ll ans=(numo*invdeno)%MOD; return ans;}

/*** Count Set Bits ***/
int set_bits(unsigned long long int x) {return __builtin_popcountll(x);}


void solve()
{
    
}

int main() 
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    
    int test;
    cin>>test;
    while(test--) solve();
    return 0;
}
