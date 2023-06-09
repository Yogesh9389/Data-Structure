#include <iostream>
using namespace std;

int binary_search(int arr[],int n,int key)
{
    int first = 0;
    int last = n;
    while (first <= last)
    {
        int mid = (first + last)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key)
        {
            last = mid - 1;
        }
        else{
            first = mid + 1;
        }
    }
    return -1;
}
int main()
    {
      int n;
      cin>> n;
      int arr[n];
      for(int i=0; i<n; i++)
      {
        cin>> arr[i];
      }
      int key;
      cin>> key;
      cout<< binary_search(arr,n,key);
      return 0;
    }
