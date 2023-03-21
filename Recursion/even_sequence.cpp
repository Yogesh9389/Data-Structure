#include<iostream>
using namespace std;
int even(int n, int x)
{
 
       if (n==x)
       {
        return 0;
       }
       else 
       {

     cout << n << " ";   
   even(n+2, x);
       }
  



}
int main()
{
int n = 2; 
//cout<< "Enter a number : ";
int x; 
cout<< "Enter X : ";
cin>> x;
 even(n,x);
return 0;
}