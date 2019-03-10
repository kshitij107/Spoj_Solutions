#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int i,j,a,d1,d2,ca,cd,c[10000],na,nd
	for (i=0; i>=0; i++)
	{
		a=10000; d1=10000; d2=10000;
		cin>>na>>nd;
		if (na==0 && nd==0)
			break;
		for (j=0; j<na; j++)
		{
			cin>>ca;
			if (ca<a)
				a=ca;
		}
		for (j=0; j<nd; j++)
		{
			cin>>cd;
			if (cd<d1)
			{
				d2=d1;
				d1=cd;
			}
			else if (cd<d2)
				d2=cd;
		}
		if (a<d2)
			c[i]=1;
		else
			c[i]=0;
	}
	for (j=0; j<i; j++)
	{
		if (c[j]==1)
			cout<<'Y'<<endl;
		else
			cout<<'N'<<endl;
	}
	return 0;
}


