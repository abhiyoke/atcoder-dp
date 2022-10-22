//Given an integer array nums, return the length of the longest strictly increasing subsequence.
//A subsequence is a sequence that can be derived from an array by deleting some or no elements without changing the order of the remaining elements. For example, [3,6,2,7] is a subsequence of the array [0,3,1,6,2,2,7].
//https://leetcode.com/problems/longest-increasing-subsequence/
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
const int N=1e5;
vi a(N);
int dp[N];
int lis(int i){
	if(dp[i]!=-1) return dp[i];
	int ans=1;
	for(int j=0;j<i;j++){
		ans=max(ans,lis(j)+1);
	}
	return dp[i]=ans;
}
signed main() {
ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
fo(i,0,n) cin>>a[i];
fo(i,0,n){
	ans=max(ans,lis(i));
}
   cout<<ans;
    cout<<endl;
}
return 0;    
}
