// Sub array with given sum
// input n=5, s=9, a[n] a= 1 2 3 4 5 : output: 2 4
#include<iostream> 
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int k=0; k<n; k++)
    {
        cin>>a[k];
    }
    int i=0, j=0, sum=0; // sum is to store curret sum
    int fi = -1; // to store first index
    int li = -1; // to store last index
    while(j<n && sum+a[j]<=s)
    {
        sum += a[j];
        j++;
    }
    if(sum == s)
    {
        cout << i+1 <<" "<<j << endl;
        return 0;
    }
    while(j<n)
    {
        sum += a[j];
        while(sum > s)
        {
            sum -= a[i];
            i++;
        }
        if(sum == s)
        {
            fi = i+1;
            li = j+1;
            break;
        }
        j++;
    }
    cout<< fi <<" "<< li;
    return 0;
}