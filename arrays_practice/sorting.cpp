#include<iostream>
#include<algorithm>
#include<string>
#include<climits>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(auto i=0;i<n;i++)
      cin>>arr[i];
   int size=sizeof(arr)/sizeof(arr[0]);
   // cout<<"\nsize "<<arr+size;
   // cout<<"\nlast "<<&arr[5];
    
   sort(arr,arr+n);
   for (int i : arr)
    {
        cout << i << " ";
    }
    
}