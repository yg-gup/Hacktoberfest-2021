#include <iostream>
using namespace std;

int main() {
	// your coint main()
{
	int t,i;
	cin>>t;
	int n,k,p[10000];
	while(t--)
	{
	    int rev=0,rem=0;
		cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>p[i];
	}
	for(i=0;i<n;i++)
	{
		rev=rev+p[i];
	}
	for(i=0;i<n;i++)
	{
		if(p[i]>k)
		p[i]=k;
	}
	for(i=0;i<n;i++)
	{
	    rem=rem+p[i];
	}
		cout<<rev-rem;
	
		}
}
	return 0;
}
