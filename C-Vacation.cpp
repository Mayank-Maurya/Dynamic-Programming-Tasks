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
	intl n;
	cin>>n;
	intl a[n+1][4];
	for(intl i=1;i<=n;i++)
	{
		for(intl j=1;j<=3;j++)
		{
			cin>>a[i][j];
		}
	}
	intl dp[n+1][4];
	dp[1][1]=a[1][1];
	dp[1][2]=a[1][2];
	dp[1][3]=a[1][3];
    if(n>1){
	for(intl i=2;i<=n;i++)
	{
		for(intl j=1;j<=3;j++)
		{
			if(j==1)
			{
				dp[i][j]=a[i][j]+max(dp[i-1][j+1],dp[i-1][j+2]);
			}
			if(j==2)
			{
				dp[i][j]=a[i][j]+max(dp[i-1][j-1],dp[i-1][j+1]);
			}
			if(j==3)
			{
				dp[i][j]=a[i][j]+max(dp[i-1][j-1],dp[i-1][j-2]);
			}

		}
        
        
	}
        cout<<max(dp[n][3],max(dp[n][2],dp[n][1]));
    }else{
    
         cout<<max(dp[n][3],max(dp[n][2],dp[n][1]));
	
    }
    // for(intl i=1;i<=n;i++)
    // {
    //     for(intl j=1;j<=3;j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

}
