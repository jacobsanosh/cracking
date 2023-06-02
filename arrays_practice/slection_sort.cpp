#include<iostream>
using namespace std;
void swaping(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void slection_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int smallest=i;
        for(int j=i+1;j<n;j++)          
        {
            if(arr[smallest]>arr[j])
                smallest=j;
        }
        swaping(&arr[smallest],&arr[i]);
    }
}
int main()
{
    int n;
    cout<<"Enter the array size\t";
    cin>>n;
    int arr[n];
    cout<<"\nenter the elements one by one";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    slection_sort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i];
}