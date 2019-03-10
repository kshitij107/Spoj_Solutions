#include<bits/stdc++.h>
using namespace std;
int main()
{
	long i,t,f,x[10000000],j,temp,c[10000000],k,s,sum;
	cin>>t;
	for (i=0; i<t; i++)
	{
		c[i]=0;
		sum=0;
		cin>>s>>f;
		for (j=0; j<f; j++)
			cin>>x[j];
		for (j=0; j<f; j++)
		{
			for (k=j+1; k<f; k++)
			{
				if (x[k]>x[j])
				{
					temp=x[j];
					x[j]=x[k];
					x[k]=temp;
				}
			}
			sum+=x[j];
			if (sum>=s)
			{
				c[i]=j+1;
				break;
			}
		}
	}
	for (i=0; i<t; i++)
	{
		cout<<"Scenario #"<<(i+1)<<":"<<endl;
		if (c[i]>0)
		{
			cout<<c[i]<<endl;
			if (i<(t-1))
				cout<<endl;
		}
		else
		{
			cout<<"impossible"<<endl;
			if (i<(t-1))
				cout<<endl;
		}
	}
	return 0;
}






