//https://atcoder.jp/contests/dp/tasks/dp_a
#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(),v.end()
#define ha "YES"
#define na "NO"
#define fo(i,a,b) for(int i=a;i<b;i++)
#define arrin int n;cin>>n;vector<int> a(n);for(int i=0;i<n;i++)cin>>a[i];
#define sumarr int sum=0;for(int i=0;i<n;i++)sum+=a[i];
#define forloop for(int i=0;i<n;i++)
#define allr(v) (v).rbegin(),(v).rend()
#define vi vector <int>
#define set_bits __builtin_popcountll
#define mp map<int,int>
#define pb push_back
#define po pop_back
#define int long long
#define endl "\n"
#define F first
#define S second
#define mod 1e9 + 7
#define inf 1e15
const int N=1e5+10;
int dp[N];
int a[N];
int fun(int i){
	if(i==0) return 0;
	if(dp[i]!=-1) return dp[i];
	int cost=INT_MAX;
	//way 1 
	cost=min(cost,fun(i-1)+abs(a[i]-a[i-1]));
	if(i>1) cost=min(cost,fun(i-2)+abs(a[i]-a[i-2]));
	return dp[i]=cost;
}
signed main() {
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
    	memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
 fo(i,0,n) cin>>a[i];
 cout<<fun(n-1);
   
    cout<<endl;
}
return 0;    
}
