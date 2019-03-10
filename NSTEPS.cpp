#include<bits/stdc++.h>
using namespace std;
int main()
{
	long t,x[20000],y[20000],i,num[20000];
	cin>>t;
	for (i=0; i<t; i++)
		cin>>x[i]>>y[i];
	for (i=0; i<t; i++)
	{
		num[i]=-1;
		if (x[i]>=0 && y[i]>=0)
		{
			if (x[i]==y[i])
			{
				if (x[i]%2==0)
					num[i]=x[i]*2;
				else
					num[i]=(x[i]*2)-1;
			}
			else if (x[i]-y[i]==2)
			{
				if (y[i]%2==0)
					num[i]=x[i]+y[i];
				else
					num[i]=x[i]+y[i]-1;
			}
		}
		if (num[i]==-1)
			cout<<"No Number"<<endl;
		else
			cout<<num[i]<<endl;
	}
	return 0;
}
