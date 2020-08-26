#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define intl long long
int main()
{
	intl n;
	cin>>n;
	intl a[n+1];
	for(intl i=0;i<n;i++)
	{
		cin>>a[i];
	}
	intl dp[n+1];
	dp[0]=0;
	dp[1]=abs(a[1]-a[0])+dp[0];
	for(intl i=2;i<n;i++)
	{
		dp[i]=min(((abs(a[i-1]-a[i]))+dp[i-1]),((abs(a[i-2]-a[i])+dp[i-2])));
	}
	cout<<dp[n-1];

}
