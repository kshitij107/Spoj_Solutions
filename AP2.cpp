#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,t;
	long long t3[100],l3[100],sum[100],n,j,d,a;
	cin>>t;
	for (i=0; i<t; i++)
		cin>>t3[i]>>l3[i]>>sum[i];
	for (i=0; i<t; i++)
	{
		n=(2*sum[i])/(t3[i]+l3[i]);
		d=(l3[i]-t3[i])/(n-5);
		a=((t3[i]+l3[i])-(n-1)*d)/2;
		cout<<n<<endl;
		for (j=0; j<n; j++)
			cout<<(a+(j*d))<<" ";
		cout<<endl;
	}
	return 0;
}




