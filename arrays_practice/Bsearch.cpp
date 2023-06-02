#include<iostream>
using namespace std;
int binary_search(int arr[],int low,int high,int ele)
{
    if(low>high)
            return -1;
    int mid=(low+high)/2;
    if(arr[mid]==ele)
    {
        return mid;
    }
    else if(arr[mid]<ele)
    {
        // cout<<"\nEnter in low"<<low<<"\t"<<high;
        return binary_search(arr,mid+1,high,ele);
    }
    else
    {
        // cout<<"Enter in high"<<low<<"\t"<<high;;
        return binary_search(arr,low,mid-1,ele);
    }
    // return -1;
}
void asc_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                arr[i]+=arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];
            }
        }
    }
}
int main()
{
    int n,ele;
    cout<<"\nenter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"\nenter the elements\t";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter the elements searching for\t";
    cin>>ele;
   
    asc_sort(arr,n);
    cout<<"after sorting"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
     int pos=binary_search(arr,0,n,ele);
    cout<<"elemnts find at position "<<pos;
}