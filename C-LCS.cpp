#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,t;
	cin>>s>>t;
	int dp[3001][3001]={0};
	for(int i=1;i<=s.size();i++)
	{
		for(int j=1;j<=t.size();j++)
		{
			if(s[i-1]==t[j-1])
			{
				dp[i][j]=1+d[i-1][j-1];
			}else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}

	for(int i=1;i<=s.size();i++)
	{
		for(int j=1;j<=t.size();j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}

}
