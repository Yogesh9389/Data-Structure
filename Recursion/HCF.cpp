#include<iostream>
using namespace std;
int hcf(int n, int m)
{
    
  if(n == 1 || m == 1 )
  {
    return 1;
  }
  else if (n > m)
  {
    return hcf(n-m, m);
  }
  else if(n < m){
    return hcf(n, m-n);
  }
  else{
    return n;
  }
}

int main()
{
    int n;
    int m;
    cout<< "Enter two numbers : ";
    cin>>n>>m;
    cout<< "HCF of "<< n << " and " << m << " is : " << hcf(n,m);
    return 0;
}