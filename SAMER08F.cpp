#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	long x[20000];
	for (i=0; i>=0; i++)
	{	cin>>x[i];
		if (x[i]==0)
			break;
	}
	for  (i=0; i>=0; i++)
	{
		if (x[i]==0)
			break;
		cout<<(x[i]*(x[i]+1)*(2*x[i]+1))/6<<endl;
	}
	return 0;
}

