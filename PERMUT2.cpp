#include<bits/stdc++.h>
using namespace std;
int main()
{
	long x[100010],a,i,j,n;
	int c[100010];
	for (a=0; a>=0; a++)
	{
		c[a]=0;
		cin>>n;
		if (n==0)
			break;
		for (i=1; i<=n; i++)
			cin>>x[i];
		for (i=1; i<=n; i++)
		{
			for (j=1; !(x[j]==i); j++);
			if (!(x[i]==j))
			{
				c[a]=1;
				break;
			}
		}
	}
	for (i=0; i<a; i++)
	{
		if (c[i]==1)
			cout<<"not ambiguous"<<endl;
		else
			cout<<"ambiguous"<<endl;
	}
	return 0;
}



