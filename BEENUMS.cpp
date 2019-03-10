#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,c[10000];
	long x,r;
	for (i=0; i>=0; i++)
	{
		cin>>x;
		if (x==-1)
			break;
		if (x%6==1)
		{
			r=sqrt((x-1)/3);
			if((x-1)/3==r*(r+1))
				c[i]=1;
		}
	}
	for (j=0; j<i; j++)
	{
		if (c[j]==1)
			cout<<"Y"<<endl;
		else
			cout<<"N"<<endl;
	}
	return 0;
}



