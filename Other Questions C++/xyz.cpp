// First Repating Element -- Amazon , Oracle
// 
#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n,i;
	cin>> n;
	int a[n];
	
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}	
	int minidx = INT_MAX;
	int N = 1000;
	int idx[N];
	for(i=0; i<N; i++)
	{
		idx[i] = -1;
	}
	for(i=0;i<n; i++)
	{
		if(idx[a[i]] != -1)
		{
			minidx = min(minidx,idx[a[i]]);
		}
		else
		{
			idx[a[i]] = i;
		}
	}
	if(minidx == INT_MAX)
	{
		cout<<"-1"<<endl;
	}
	else
	{
		cout<<(minidx+1)<<endl;
	}
	return 0;
}