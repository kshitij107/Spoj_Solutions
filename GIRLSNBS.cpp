#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=0,j,b=0,g=0,c[10000];
	while (!((b==-1) && (g==-1)))
	{
		cin>>b>>g;
		if ((b==0) && (g==0))
			c[i]=0;
		else if (b==g)
			c[i]=1;
		else if (b>g)
		{
			c[i]=(b/(g+1));
			if (b%(g+1)>0)
				c[i]++;
		}
		else
		{
			c[i]=(g/(b+1));
			if (g%(b+1)>0)
				c[i]++;
		}
		i++;
	}
	for (j=0; j<(i-1); j++)
		cout<<c[j]<<endl;
	return 0;
}


