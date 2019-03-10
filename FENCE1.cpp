#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long i,l[100000],rfac;
	double fac=0.15915494,area,fin;
	for (i=0; i>=0; i++)
	{
		cin>>l[i];
		if (l[i]==0)
			break;
	}
	for (i=0; !(l[i]==0); i++)
	{
		area=l[i]*l[i]*fac;
		rfac=area*1000;
		if (rfac%10>5)
			rfac+=10;
		else if (rfac%10==5)
		{
			if (((rfac%100)-5)%20==10)
				rfac+=10;
		}
		rfac/=10;
		fin=rfac/100.0;
		cout<<fin;
		if (rfac%100==0)
			cout<<".00";
		else if (rfac%10==0)
			cout<<"0";
		cout<<endl;
	}
	return 0;
}



