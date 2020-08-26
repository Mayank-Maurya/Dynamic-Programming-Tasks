#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define intl long long
void fastio()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
}
int main()
{
	intl n,k;
	cin>>n>>k;
	intl a[n+1];
	for(intl i=0;i<n;i++)
	{
		cin>>a[i];
	}
	intl dp[n+1];
	dp[0]=0;
	//dp[1]=abs(a[1]-dp[0]);
	for(intl i=1;i<n;i++)
	{
		intl t=1;
		int m=INT_MAX;
		intl x=0;
		while(t<=k)
		{
			if(i-t>=0){
			x=min(((abs(a[i-t]-a[i]))+dp[i-t]),((abs(a[i-t]-a[i])+dp[i-t])));
			if(x<m)
				m=x;
            }else{
                break;
            }
			t++;
		}
		dp[i]=m;
	}
	// for(intl i=0;i<n;i++)
	// {
	// cout<<dp[i]<<" ";
	// }
	cout<<dp[n-1];
}
