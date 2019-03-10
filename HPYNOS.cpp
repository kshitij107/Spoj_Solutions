#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,x;
	long l;
	cin>>l;
	for (i=0; i<20; i++)
	{
		for (x=0; !(l==0); l/=10)
			x+=pow((l%10),2);
		if (x==1)
			break;
		l=x;
	}
	if (x==1)
		cout<<(i+1);
	else
		cout<<-1;
	return 0;
}


