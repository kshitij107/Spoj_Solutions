#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,t,ng,nm,x,gg[1000],gm[1000];
	cin>>t;
	for (i=0; i<t; i++)
	{
		gg[i]=0;
		gm[i]=0;
		cin>>ng>>nm;
		for (j=0; j<ng; j++)
		{
			cin>>x;
			if (x>gg[i])
				gg[i]=x;
		}
		for (j=0; j<nm; j++)
		{
			cin>>x;
			if (x>gm[i])
				gm[i]=x;
		}
	}
	for (i=0; i<t; i++)
	{
		if (gm[i]>gg[i])
			cout<<"MechaGodzilla"<<endl;
		else
			cout<<"Godzilla"<<endl;
	}
	return 0;
}



