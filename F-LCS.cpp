#include<bits/stdc++.h>
using namespace std;
string ans="";
// string lcsprint(int dp[][3001],int i,int j)
// {
//     if(i==0 or j==0)
//         return "";
// }
int dp[3001][3001];

int lcs(string& s,string& t,int i,int j)
{
    if(i==s.size() or j==t.size())
    {
        return 0;
    }
    if(dp[i][j]!=-1)
        return dp[i][j];
        if(s[i]==t[j])
    {
        return dp[i][j]=1+lcs(s,t,i+1,j+1);
    }
    else{
        return dp[i][j]=max(lcs(s,t,i+1,j),lcs(s,t,i,j+1));
    }
}
int main()
{
    memset(dp,-1,sizeof(dp));
	string s,t;
	cin>>s>>t;
    string a="";
    int i=0,j=0;
    int len=lcs(s,t,i,j);
    while(len>0)
    {
        if(s[i]==t[j])
        {
            a+=s[i];
            i++;
            j++;
            len--;
        }else{
            if(dp[i][j+1]>dp[i+1][j])
            {
                j++;
            }else{
                i++;
            }
        }
    }
   
    cout<<a<<endl;

}
