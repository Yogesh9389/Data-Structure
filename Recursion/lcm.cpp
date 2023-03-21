#include<iostream>
using namespace std;
int Lcm(int n , int m , int k)
{
  if(n == m)
  {
    return n;
  }
 else if( n == 1 || m == 1)
  {
    return n*m;
  }
  
 if (k % n == 0 && k % m == 0)
{
  return k;
}
else 
{
  return Lcm(n , m , k+1);
}
  
}

int main()
{
  int n ;
  int m ;
  int k =2 ;
  cout<< "Enter two values : ";
  cin>> n>> m;  
  cout<< Lcm (n, m, k);
  

  return 0;
}