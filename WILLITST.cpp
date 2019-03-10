#include<bits/stdc++.h>
int main()
{
	long long a;
	std::cin>>a;
	int c=0,i;
	for (i=1; pow(2,i)<=a; i++)
	{
		if (a==pow(2,i))
		{
			c=1;
			break;
		}
	}
	if (c==0)
		std::cout<<"NIE";
	else
		std::cout<<"TAK";
	return 0;

}


