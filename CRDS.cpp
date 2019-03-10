#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,t;
	long x[1000];
	long long ans;
	cin>>t;
	for (i=0; i<t; i++)
		cin>>x[i];
	for (i=0; i<t; i++)
	{
		ans=x[i]*(3*x[i]+1)/2;
		cout<<ans%1000007<<endl;
	}
	return 0;
}

