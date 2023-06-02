#include<iostream>
using namespace std;
void swaping(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void Bubble_srt(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swaping(&arr[j],&arr[j+1]);
            }
        }
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
    Bubble_srt(arr,n);
    cout<<"\nArray elments after sorting is \t";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";

}