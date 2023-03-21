// Source code Record breaker
/* The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.
 Input:  1 2 0 7 2 0 2 0 Output: #1: 2
 */
 #include<iostream>
 using namespace std;
 int main()
 {
 	int n,i, mx = -9999;
 	cin>>n;
 	int a[n+1];
 	a[n] = -1;
 	for(i=0; i<n; i++)
 	{
 		cin>>a[i];
	}
	if(n==1)
		{
			cout<<"1"<<endl;
			return 0;
		}
		int ans = 0;
	for(i=0; i<n+1; i++)
	{
		if(a[i] > mx && a[i] > a[i+1] )
		{
			ans++;
		}
		mx = max(mx, a[i]);
	}
	cout << ans << endl;
	return 0; 
 }
