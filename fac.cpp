#include<iostream>
using namespace std;
int fac(int n)
{
if(n>1)
	{
		n=n*fac(n-1);
	}
else
	{
		return 1;
	}	
}
int main()
{
int n;
cin>>n;
if(n<0)
{
	cout<<"factorial doesn't exist ";
}
else if(n==0)
{
	n=1;
	cout<<n;
}
else
{
	cout<<fac(n);
}
return 0;
}
