#include<iostream>
using namespace std;
// int main()
// {
//     int n;
//     cout<<"\nenter the  no of elements\t";
//     cin>>n;
//     int arr[n],max;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//         if(i==0)
//         {
//             max=arr[i];
//         }
//         if(arr[i]>max)
//         {
//             max=arr[i];
//         }
//     }
//     cout<<"\nthe max element is\t"<<max;
// }
/*
int main()
{
    int n;
    cout<<"\nenter the  no of elements\t";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            // cout<<"$"<<arr[j];
            sum+=arr[j];
            cout<<"\nsum"<<sum;
        }
    }
}
*/
/*
int main()
{
    int n;
    cout<<"\n enter the size of the array\t";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    //to find the longest array element
    cout<<"\nhi"<<endl; 
    int diff=0,len=0,temp=0,pos,i=0;
   while(i<n||i+temp<n-1)
    {
        for(int j=i;j<n-1;j++)
        {
            cout<<"j"<<j;
            if(j==0||diff!=arr[j+1]-arr[j])
            {
                // cout<<"i"<<i<<"temp"<<temp;
                diff=arr[j+1]-arr[j];
                temp=0;
                i=j;
            }
            else{
                if(arr[j+1]-arr[j]==diff)
                {
                    temp++;
                    if(temp>len)
                    {
                        pos=i;
                        len=temp;
                    }
                }
            }
        }
        
        // cout<<i+temp;
    }
    
    cout<<"max length of subarray is "<<len<<"\n";
    for(int i=pos;i<(pos+len+1);i++)
    {
        cout<<arr[i];
    }
}*/
/*
int main()
{
    int n;
    cout<<"\nenter the size of the array\t";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int mx=-999;
    for(int i=0;i<n-1;i++)
    {
        mx=max(mx,arr[i]);
        if(mx==arr[i]&&arr[i]>arr[i+1])
        {
            cout<<"\nmax out value is"<<arr[i];
        }
    }

}
*/
/*
int main()
{
    int  n;
    cout<<"\nenter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int count=0,pos;
    int temp[n];
    for(int i=0;i<n;i++)
    {
       temp[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        if(temp[arr[i]]==-1)
            temp[arr[i]]=1;
        else
            temp[arr[i]]+=1;
        if(temp[arr[i]]>count &&i<arr[i])
            pos=i;
    }
    cout<<"pos"<<pos;
}
*/
/*
int main()
{
    int tar,st=0,en=0,n,sum=0;
    cout<<"\nenter the size of the array\t";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"\nenter the target";
    cin>>tar;
    for(int i=0;i<n+1;i++)
    {
        if(sum==tar){
            cout<<"founded sum index is "<<st<<" "<<en;
            break;
        }
        else if(sum>tar)
        {
            st+=st;
            sum-=arr[st];
        }
        else{
            sum+=arr[i];
            cout<<"sum="<<sum;
            en=i;
        }
    }
}
*/
/*
int main()
{
    int n,j=0;
    cout<<"\nenter the size of array\t";
    cin>>n;
    int arr[n];
    bool bol[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>=0)
        {
            bol[arr[i]]=true;
        }
        else{
            bol[arr[i]]=false;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(!bol[i])
        {
            cout<<"first missing value is"<<i;
            break;
        }
    }

}
*/
/*
int main()
{
    int n,j=0;
    cout<<"\nenter the size of array\t";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
   
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<j;k++)
                cout<<arr[k];
            cout<<"\n";
        }
    }

}
*/
#include<climits>
/*int main()
{
    int n,j=0;
    cout<<"\nenter the size of array\t";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int current[n];
    current[0]=arr[0];
    for(int i=1;i<n+1;i++)
    {
        current[i]=arr[i]+current[i-1];
    }
    int sumMax=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=1;j<n;j++)
        {
            sum=current[j]-current[i];
            sumMax=max(sum,sumMax);
        }
    }
    cout<<"\nmax sum="<<sumMax;
}
*/
/*
int main()
{
    int n,j=0;
    cout<<"\nenter the size of array\t";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int current=0,maxsum=0;

    for(int i=0;i<n;i++)
    {
        current=max(arr[i]+current,0);
        // cout<<"current"<<current<<"\n";
        maxsum=max(current,maxsum);
        // cout<<"max"<<maxsum<<"\n";
    }
    cout<<"max sum="<<maxsum;
}

*/
/*
int kdane(int arr[],int n)
{
    int current=0,maxsum=0;
    for(int i=0;i<n;i++)
    {
        current+=-(arr[i]);
        if(current<0)
            current=0;
        maxsum=max(maxsum,current);
    }
    return maxsum;
}
int main()
{
     int n,j=0;
    cout<<"\nenter the size of array\t";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int wrap=kdane(arr,n);
    cout<<"\nwrap value is"<<wrap;
    int total=0;
    for(int i=0;i<n;i++)
    {
        total+=arr[i];
        arr[i]=-arr[i];
    }
    cout<<"\ntotal is"<<total;
    int nonwrap=total+kdane(arr,n);
    cout<<"\nnonwrap value is"<<nonwrap;
    cout<<"max sum"<<max(wrap,nonwrap);
}
*/
int main()
{
     int n,j=0;
    cout<<"\nenter the size of array\t";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int low=0,high=n-1;
    int target;
    cout<<"\nenter the target values\t";
    cin>>target;
    while(low<high)
    {
        if(arr[low]+arr[high]==target)
        {
            cout<<"value is"<<low<<" "<<high;
            break;
        }
        else if(arr[low]+arr[high]>target)
            high--;
        else
            low++;
    }
}