#include<iostream>
using namespace std;
int odd(int n)
{
 
       
  while( n >= 1)   
  {  
    
 if(n%2 != 0)
{

    cout << n << " ";
    return odd(n-1);
}
return odd(n-1);
}
}
int main()
{
int n; 
cout<< "Enter a number : ";
cin>> n;
 odd(n);
return 0;
}