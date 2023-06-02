#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1,current=arr[i];
        while(arr[j]>current&& j>=0)
        {
            arr[j+1]=arr[j];
            for(int i=0;i<n;i++)
                cout<<arr[i];
            j--;
        }
        arr[j+1]=current;
    }
}
int main()
{
    int n;
    cout<<"\nenter the size of array\t";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the array elements\t";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    insertion_sort(arr,n);
    cout<<"\nArray elments after sorting is \t";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";

}