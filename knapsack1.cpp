//https://atcoder.jp/contests/dp/tasks/dp_d
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
int dp[105][100005];
int wt[105],val[105];
int func(int ind,int wt_left){
	if(wt_left==0) return 0;
	if(ind<0) return 0;
	if(dp[ind][wt_left]!=-1) return dp[ind][wt_left];
	//dont choose item at ind;
	int ans=func(ind-1,wt_left);
	//choose item at ind;
	if(wt_left-wt[ind]>=0)
	ans=max(ans,func(ind-1,wt_left-wt[ind])+val[ind]);
	return dp[ind][wt_left]=ans;
}
signed main() {
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    memset(dp,-1,sizeof(dp));
    int n,w; cin>>n>>w;
    fo(i,0,n){
    	cin>>wt[i]>>val[i];
    }
    cout<<func(n-1,w);
return 0;    
}
