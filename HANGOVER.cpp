#include<bits/stdc++.h>
using namespace std;
int main()
{
	float n[500000],l,c;
	int i,j,x;
	for (i=0; i>=0; i++)
	{
		cin>>n[i];
		if (n[i]==0.00)
			break;
	}
	for (i=0; !(n[i]==0.00); i++)
	{
		x=0;  l=0;
		for (x=2; x>0; x++)
		{
			l+=1.0/x;
			if (l>=n[i])
				break;
		}
		cout<<(x-1)<<" card(s)"<<endl;
	}
	return 0;
}

